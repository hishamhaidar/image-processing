//// chapter 6: color detect
//string path = "Resources/lambo.png";
//Mat img = imread(path), imgHSV, mask;
//int hmin = 0, smin = 110, vmin = 153;
//int hmax = 19, smax = 240, vmax = 255;
//
//
//cvtColor(img, imgHSV, COLOR_BGR2HSV);
//namedWindow("Trackbars", WINDOW_NORMAL);
//createTrackbar("hue min", "Trackbars", &hmin, 179);
//createTrackbar("hue max", "Trackbars", &hmax, 179);
//createTrackbar("sat min", "Trackbars", &smin, 255);
//createTrackbar("sat max", "Trackbars", &smax, 255);
//createTrackbar("val min", "Trackbars", &vmin, 255);
//createTrackbar("val max", "Trackbars", &vmax, 255);
//while (true)
//{
//	Scalar lower(hmin, smin, vmin);
//	Scalar upper(hmax, smax, vmax);
//	inRange(imgHSV, lower, upper, mask);
//
//	imshow("Image", img);
//	imshow("img hsv", imgHSV);
//	imshow("mask", mask);
//	waitKey(1);