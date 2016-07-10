#include "opencv\highgui.h"

int main(int argc, char** argv)
{
	IplImage* img = cvLoadImage("Robot_blue.jpg");
	cvNamedWindow("ex", CV_WINDOW_AUTOSIZE);
	cvShowImage("ex", img);
	cvWaitKey(0);
	cvReleaseImage(&img);
	cvDestroyWindow("ex");
}