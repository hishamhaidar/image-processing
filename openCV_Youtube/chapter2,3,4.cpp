//// chapter 2 : basic functions
//string path = "Resources/test.png";
//Mat img = imread(path);
//Mat imgGray, imgBlur, imgCanny, imgDilation, imgErode;
//// change image color to gray
//cvtColor(img, imgGray, COLOR_BGR2GRAY);
//// do image blur
//GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);
//// detector Canny
//Canny(imgBlur, imgCanny, 25, 75);
//// dilate the edges : increase thickness of edges
//Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//dilate(imgCanny, imgDilation, kernel);
//// reduce thickness
//erode(imgDilation, imgErode, kernel);
//
////imshow("Image", img);
////imshow("Image gray", imgGray);
////imshow("Image Blur", imgBlur);
//imshow("Image Canny", imgCanny);
//imshow("Image dilation", imgDilation);
//imshow("Image erode", imgErode);
//waitKey();

////chapter 3
//Mat img = imread(path);
//
//Mat imgResize, imgCrop;
//
//// cout << img.size() << endl;
//resize(img, imgResize, Size(640, 480));
//// resize(img, imgResize, Size(),0.5,0.5)  ;//this scale;
////Crop a region
//Rect roi(200, 100, 300, 300);
//imgCrop = img(roi);
//imshow("Image", img);
//imshow("Image resized", imgResize);
//imshow("Image cropped", imgCrop);
//waitKey();
// 
// 
//// chapter 4: draw shape ,text
//	// Blank image
//Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));
//// make circle in image
////circle(img, Point(256, 256), 155, Scalar(0, 69, 255),10);
//circle(img, Point(256, 256), 155, Scalar(0, 69, 255), FILLED);
//// make rectangle
//rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
//// draw line
//line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2);
//putText(img, "Hisham Haidar", Point(137, 262), FONT_HERSHEY_PLAIN, 2, Scalar(0, 69, 255), 2);
//imshow("Image", img);
//waitKey();