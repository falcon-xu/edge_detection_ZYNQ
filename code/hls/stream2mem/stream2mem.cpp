#include <hls_video.h>
#include <hls_stream.h>
#include <ap_axi_sdata.h>

typedef ap_axiu<24,1,1,1> pixel_t;
typedef hls::stream<pixel_t> vstream_t;

#define IMG_MAX_ROWS	1080
#define IMG_MAX_COLS	1920

unsigned int baseAddr[3];

void writemem(unsigned int *pMemPort, unsigned int to, unsigned int *from, int len)
{
	if(len > 0)
	{
		memcpy(pMemPort+to, from, len);
	}
}

template<int ROWS, int COLS, int T>
void mat2mem(hls::Mat<ROWS, COLS, T> &img, unsigned int *pMemPort, int &w, int r)
{
	hls::Scalar<HLS_MAT_CN(T), HLS_TNAME(T)> pixelA, pixelB, pixelC, pixelD;
	unsigned int cacheBuff[COLS/4];
	int local_rows = img.rows;
	int local_cols = img.cols;
	int line_len   = img.cols*3/4;
	static int index=0;
	int n = (index<2)?(index+1):0;
	index = (n == r)?index:n;
	w = index;
#pragma HLS STREAM variable=cacheBuff depth=COLS/4

	for(int row=0; row<local_rows; row++)
	{
#pragma HLS loop_tripcount min=12 max=1080
#pragma HLS dataflow
		for(int col=0; col<local_cols; col+=4)
		{
#pragma HLS loop_tripcount min=3 max=480
			img >> pixelA;
			img >> pixelB;
			cacheBuff[0] = (pixelA.val[0]<<0)|(pixelA.val[1]<<8)|(pixelA.val[2]<<16)|(pixelB.val[0]<<24);
			img >> pixelC;
			cacheBuff[1] = (pixelB.val[1]<<0)|(pixelB.val[2]<<8)|(pixelC.val[0]<<16)|(pixelC.val[1]<<24);
			img >> pixelD;
			cacheBuff[2] = (pixelC.val[2]<<0)|(pixelD.val[0]<<8)|(pixelD.val[1]<<16)|(pixelD.val[2]<<24);
		}
		writemem(pMemPort, (baseAddr[index]>>2)+(row*line_len), cacheBuff, line_len*4);
	}
}

void stream2mem(vstream_t &vstream, unsigned int *pMemPort, int rows, int cols, int &indexw, int indexr)
{
#pragma HLS INTERFACE axis port=vstream
#pragma HLS INTERFACE m_axi port=pMemPort
#pragma HLS INTERFACE s_axilite port=rows
#pragma HLS INTERFACE s_axilite port=cols
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE ap_none port=indexw
#pragma HLS INTERFACE ap_none port=indexr
#pragma HLS INTERFACE s_axilite port=baseAddr
#pragma HLS INTERFACE ap_none port=baseAddr

	hls::Mat<IMG_MAX_ROWS, IMG_MAX_COLS, HLS_8UC3> img(rows, cols);

#pragma HLS dataflow
	hls::AXIvideo2Mat(vstream, img);
	mat2mem(img, pMemPort, indexw, indexr);
}
