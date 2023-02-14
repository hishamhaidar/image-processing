#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
	//Mat img = imread("logo.png",IMREAD_UNCHANGED);//define the image
	//cout << "width of image: " << img.cols << endl;
	//cout << "height of image: " << img.rows << endl;
	//int t = img.type();
	//if (t == CV_8UC1)
	//{
	//	cout << "graysxcale" << endl;
	//}
	//else if (t == CV_8UC3)
	//{
	//	cout << "24 bit color image" << endl;
	//}
	//else
	//	cout << "other" << endl;


	//	
	//imshow("first image", img);// to show it
	//resizeWindow("first image", 300, 300);
	//waitKey();// wait for it to load before executing

	//exc 1
	Mat img(200, 50, CV_8UC1);
	// or 	Mat img(Size(50,200), CV_8UC1);
	//exc2
	Mat img2(50, 200, CV_8UC3);
	//exc3
	Mat img3 = Mat::zeros(20, 40, CV_8UC1);
	//exc4
	Mat img4(20, 40, CV_8UC1);
	img4.setTo(255);
	//exc5
	Mat img5(99, 121, CV_8UC3);
	img5.setTo(Scalar(0,0,255));//blue,green,red
	imshow("first image", img5);
	

	waitKey();
	return 0;
}