#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
    Mat img = imread("sun_dog.png", IMREAD_COLOR);

    // Convert the image to HSV color space
    Mat hsv;
    cvtColor(img, hsv, COLOR_BGR2HSV);

    // Define the range of colors to detect (orange in this case)
    Scalar lower_bound(10, 100, 100);
    Scalar upper_bound(20, 255, 255);

    // Change the color of the sun to red
    for (int i = 0; i < hsv.rows; i++) {
        for (int j = 0; j < hsv.cols; j++) {
            Vec3b pixel = hsv.at<Vec3b>(i, j);
            if (pixel[0] >= lower_bound[0] && pixel[0] <= upper_bound[0] && pixel[1] >= lower_bound[1] && pixel[1] <= upper_bound[1] && pixel[2] >= lower_bound[2] && pixel[2] <= upper_bound[2]) {
                img.at<Vec3b>(i, j)= Vec3b(0, 0, 255);
            }
        }
    }

    // Save the result
    imwrite("result_stud.png", img);

    return 0;
}
