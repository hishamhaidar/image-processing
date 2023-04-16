#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
    // Read the fish3.jpg and sea_bg.jpg in color
    Mat fish = imread("fish3.jpg");
    Mat sea = imread("sea_bg.jpg");

    // Copy the fish to the sea image
    for (int i = 0; i < fish.rows; i++) {
        for (int j = 0; j < fish.cols; j++) {
            Vec3b pixel = fish.at<Vec3b>(i, j);
            if (pixel[0] > 50 && pixel[1] < 150 && pixel[2] < 150) {
                sea.at<Vec3b>(i, j) = pixel;
            }
        }
    }

    // Save the result as result_stud.png
    imwrite("result_stud.png", sea);

    return 0;
}
