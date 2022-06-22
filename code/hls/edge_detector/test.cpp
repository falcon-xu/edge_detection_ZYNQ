#include "hls_opencv.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

typedef ap_axiu<24, 1, 1, 1> us_pixel_t;
typedef hls::stream<us_pixel_t> ustream_t;

void edge_detector(ustream_t &src, ustream_t &dst, unsigned char threshold);

int main()
{
	ustream_t src, dst;
    cv::Mat imgSource = cv::imread("../../../test.jpg");
    cv::Mat imgSobel(1080, 1920, CV_8UC3);

	if(imgSource.empty())
	{
		printf("load jpg fail\r\n");
		return -1;
	}
	if(imgSource.elemSize() != 3)
	{
		printf("jpg d len not fit\r\n");
		return -1;
	}

    cvMat2AXIvideo(imgSource, src);
    edge_detector(src, dst, 0);
    AXIvideo2cvMat(dst, imgSobel);

    cv::imshow("alinx",imgSobel);
    cv::waitKey(0);
    return 0;
}

