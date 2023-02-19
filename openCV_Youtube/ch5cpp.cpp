//// chapter 5: Warp images 
//string path = "Resources/cards.jpg";
//Mat img = imread(path);
//Mat matrix, imgWard, matrixQ, imgQ;
//// width and height of cards
//float w = 250, h = 350;
//Point2f src[4] = { {529,142},{771,190},{405,396},{674,457} };
//Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };
//matrix = getPerspectiveTransform(src, dst);
//warpPerspective(img, imgWard, matrix, Point(w, h));
////// for queen
//Point2f src2[4] = { {67,321},{337,277},{89,633},{403,573} };
//Point2f dst2[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };
//matrixQ = getPerspectiveTransform(src2, dst2);
//warpPerspective(img, imgQ, matrixQ, Point(w, h));
//for (int i = 0; i < 4; i++)
//{
//	circle(img, src[i], 10, Scalar(0, 0, 225), FILLED);
//	circle(img, src2[i], 10, Scalar(0, 0, 225), FILLED);
//}
//imshow("Image", img);
//imshow("King Card", imgWard);
//imshow("Queen photo", imgQ);
//
//waitKey();