#include <stdio.h>
#include <opencv4/opencv2/opencv.hpp>

using namespace cv;
int main(int argc, char** argv )
{

    Mat image;
    image = imread("./ironman.jpg");
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}