#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
    // Read the image in color
    Mat img = imread("cow_bw.jpg", IMREAD_COLOR);
    // Convert the image to HSV color space
    Mat hsv_img;
    cvtColor(img, hsv_img, COLOR_BGR2HSV);
    // Save the HSV image
    imwrite("hsv_stud.png", hsv_img);

    // Change the hue of the brown pixels to 140
    for (int i = 0; i < hsv_img.rows; i++) {
        for (int j = 0; j < hsv_img.cols; j++) {
            Vec3b pixel = hsv_img.at<Vec3b>(i, j);
            if (pixel[0] < 30) {
                pixel[0] = 140;
                hsv_img.at<Vec3b>(i, j) = pixel;
            }
        }
    }

    // Convert the modified HSV image back to BGR color space
    Mat result_img;
    cvtColor(hsv_img, result_img, COLOR_HSV2BGR);
    // Save the result image
        imwrite("result_stud.png", result_img);
        imwrite("result_hsv_stud.png",hsv_img );


    return 0;
}
