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

	////exc 1
	//Mat img(200, 50, CV_8UC1);
	//// or 	Mat img(Size(50,200), CV_8UC1);
	////exc2
	//Mat img2(50, 200, CV_8UC3);
	////exc3
	//Mat img3 = Mat::zeros(20, 40, CV_8UC1);
	////exc4
	//Mat img4(20, 40, CV_8UC1);
	//img4.setTo(255);
	////exc5
	//Mat img5(99, 121, CV_8UC3);
	//img5.setTo(Scalar(0,0,255));//blue,green,red
	////exc 6,image same size and 
	/*Mat img = imread("logo.png", IMREAD_UNCHANGED);
	Mat dest(img.size(), img.type());*/
	//exc7
	/*Mat img = imread("logo.png", IMREAD_UNCHANGED);
	Mat img2;
	resize(img, img2, Size(640, 640));
	Mat dest(img.rows/2 ,img.cols ,img.type());
	
	dest.setTo(Scalar(255,0,143));*/
	
	//imshow("first image", img2);
	// shallow copy
	/*Mat img = imread("logo.png", IMREAD_UNCHANGED);
	Mat dest = img;*/// if we modify dest.img also changed.so WRONG METHOD
	/*Mat img = imread("logo.png", IMREAD_UNCHANGED);
	Mat dest;
	img.copyTo(dest);*/
	/*Mat img(400, 600, CV_8SC3);
	int pad = 20;
	Rect r(pad, pad, img.cols - 2 * pad, img.rows - 2 * pad);
	Mat dest = img(r).clone();*/
	/*img.setTo(Scalar(0, 0, 255));
	Rect r(0,0, img.cols, img.rows / 2);
	img(r).setTo(Scalar(0,255,255));
	*/
	/*imshow("second image", img);
	imshow("second1 image", dest);
	imwrite("bka.png", dest);
	moveWindow("second image", 100, 100);*/
	// copy small img qsn

	/*Mat img = imread("kurama.jpg");
	Mat img2;
	Mat background = imread("background.jpg");


	waitKey();

	resize(img, img2, Size(20, 20));
	Rect r(background.cols/2 -10,background.rows/2 -10 ,img2.cols,img2.rows);
	img2.copyTo(background(r));
	imshow("result", background);*/
	
	/*Mat background = imread("background.jpg");
	imshow("result", background);
	Mat dest = background + 100;
	imshow("fadded", dest);
	Mat dest2 = background - 100;
	imshow("darkened", dest2);*/

	
	/*Mat background = imread("background.jpg");
	Mat inverted = 255 - background;
	imshow("original", background);
	imshow("inverted", inverted);*/

	Mat background = imread("background.jpg");
	Mat kurama = imread("kurama.jpg");
	resize(background, background, kurama.size());
	double a = 0.2;

	Mat dest = (a*kurama+(1-a)*background);
	imshow("original", background);
	imshow("dest", dest);

	waitKey();

	return 0;
}