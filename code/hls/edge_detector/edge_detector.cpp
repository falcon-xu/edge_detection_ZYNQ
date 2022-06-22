#include <hls_stream.h>
#include <hls_video.h>
#include <ap_axi_sdata.h>

typedef ap_axiu<24, 1, 1, 1> us_pixel_t;
typedef hls::stream<us_pixel_t> ustream_t;

#define IMG_MAX_HEIGHT 	1080
#define IMG_MAX_WIDTH 	1920

void thresholding(hls::Mat<IMG_MAX_HEIGHT, IMG_MAX_WIDTH, HLS_8UC1> &dst,
		hls::Mat<IMG_MAX_HEIGHT, IMG_MAX_WIDTH, HLS_8UC1> &src,
		unsigned char threshold)
{
	hls::Scalar<HLS_MAT_CN(HLS_8UC1), HLS_TNAME(HLS_8UC1)> pixel_src, pixel_dst;
	for(int i=0;i<IMG_MAX_HEIGHT;i++)
	{
		for(int j=0;j<IMG_MAX_WIDTH;j++)
		{
#pragma HLS pipeline
			src >> pixel_src;
			if(threshold == 0)
			{
				pixel_dst.val[0] = pixel_src.val[0];
			}
			else
			{
				if(pixel_src.val[0] > threshold)
				{
					pixel_dst.val[0] = 0;
				}
				else
				{
					pixel_dst.val[0] = 255;
				}
			}
			dst << pixel_dst;
		}
	}
}

void edge_detector(ustream_t &src, ustream_t &dst, unsigned char threshold)
{
#pragma HLS INTERFACE axis port=src
#pragma HLS INTERFACE axis port=dst
#pragma HLS INTERFACE s_axilite port=threshold
#pragma HLS INTERFACE ap_ctrl_none port=return

	hls::Window<3, 3, ap_int<8> > kernel_x;
	hls::Window<3, 3, ap_int<8> > kernel_y;
	hls::Point_<int> anchor;

	anchor.x = -1;
	anchor.y = -1;
	kernel_x.val[0][0] =  1;	kernel_x.val[0][1] =  0;	kernel_x.val[0][2] = -1;
	kernel_x.val[1][0] =  2;	kernel_x.val[1][1] =  0;	kernel_x.val[1][2] = -2;
	kernel_x.val[2][0] =  1;	kernel_x.val[2][1] =  0;	kernel_x.val[2][2] = -1;

	kernel_y.val[0][0] =  1;	kernel_y.val[0][1] =  2;	kernel_y.val[0][2] =  1;
	kernel_y.val[1][0] =  0;	kernel_y.val[1][1] =  0;	kernel_y.val[1][2] =  0;
	kernel_y.val[2][0] = -1;	kernel_y.val[2][1] = -2;	kernel_y.val[2][2] = -1;

	hls::Mat<IMG_MAX_HEIGHT, IMG_MAX_WIDTH, HLS_8UC3> srcImg, rgbSobel;
	hls::Mat<IMG_MAX_HEIGHT, IMG_MAX_WIDTH, HLS_8UC1> grayImg, sobelImg_x, sobelImg_y, sobelImg, thresholdImg, split0, split1;

#pragma HLS dataflow
	hls::AXIvideo2Mat(src, srcImg);
	hls::CvtColor<HLS_RGB2GRAY>(srcImg, grayImg);
	hls::Duplicate(grayImg, split0, split1);
	hls::Filter2D(split0, sobelImg_x, kernel_x, anchor);
	hls::Filter2D(split1, sobelImg_y, kernel_y, anchor);
	hls::AddWeighted(sobelImg_x,0.5f,sobelImg_y,0.5f,0.0f,sobelImg);
	thresholding(thresholdImg, sobelImg, threshold);
	hls::CvtColor<HLS_GRAY2RGB>(thresholdImg, rgbSobel);
	hls::Mat2AXIvideo(rgbSobel, dst);
}
