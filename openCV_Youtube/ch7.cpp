//Mat imgGray, imgBlur, imgCanny, imgDilation, imgErode;
//void getContours(Mat imgDil, Mat img) {
//	vector<vector<Point>> contours;
//	vector<Vec4i> hierarchy;
//	findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
//	vector<vector<Point>> conPoly(contours.size());
//	vector<Rect> boundRect(contours.size());
//	String objType;
//	for (int i = 0; i < contours.size(); i++)
//	{
//		int area = contourArea(contours[i]);
//		cout << area << endl;
//
//		if (area > 1000) {
//			float peri = arcLength(contours[i], true);
//			approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
//			drawContours(img, contours, i, Scalar(255, 0, 255), 2);
//			//drawContours(img, conPoly, i, Scalar(255, 54, 255), 2);
//			cout << conPoly[i].size() << endl;
//			boundRect[i] = boundingRect(conPoly[i]);
//			//rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 5),10);
//			int objCor = (int)conPoly[i].size();
//			if (objCor == 3) objType = "triangle";
//			else if (objCor == 4)
//			{
//				float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
//				if (aspRatio > 0.95 && aspRatio < 1.05)
//					objType = "square";
//				else objType = "Rectangle";
//			}
//			else if (objCor > 4) objType = "Circle";
//			putText(img, objType, { boundRect[i].x, boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN, 1, Scalar(0, 0, 255));
//		}
//	}
//}
//int main() {
//	// chapter 7
//	string path = "Resources/shapes.png";
//
//	Mat img = imread(path);
//	cvtColor(img, imgGray, COLOR_BGR2GRAY);
//	// do image blur
//	GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);
//	// detector Canny
//	Canny(imgBlur, imgCanny, 25, 75);
//	// dilate the edges : increase thickness of edges
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//	dilate(imgCanny, imgDilation, kernel);
//	// reduce thickness
//	erode(imgDilation, imgErode, kernel);
//
//	getContours(imgDilation, img);
//
//
//	imshow("Image", img);
//
//
//
//	waitKey(0);
//
//
//	return 0;
//}