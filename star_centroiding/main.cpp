// Reading Stars Image
// First Step: Reading the Image [DONE]
// Second Step: Displaying the Image in Matrix [DONE]
// Third Step: Calculating the Number of Pixels [DONE]
// Fourth Step: Calculating the Number of White Pixels [DONE]
// Fifth Step: Clustering the White Pixels/Counting the Stars
// Sixth Step: Calculating the Centroid of Each Star
// Seventh Step: Celebrating

#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {

    string path = "./stars.png";
    Mat img = imread(path);
    // cout << img << endl;

    // Counting the Pixels, Rows, and Columns
    int pixels = (img.cols*img.channels())*img.rows;
    int rows = img.rows;
    int columns = img.cols;
    cout << "The number of pixels are: " << columns << " X " << rows << "." << endl;

    // Identifying and Counting the White Pixels
    
    int whitePixels = 0;
    int blackPixels = 0;
    int i, j;
    for(j = 0; j < rows; j++) {
        for(i = 0; i < columns; i++) {
            if (img.at<int>(j, i) != 0) {
                whitePixels++;
            } else {
                blackPixels++;
            }
        }
    }

    cout << "The number of the white pixels are: " << whitePixels << "." << endl;
    cout << "The number of the black pixels are: " << blackPixels << "." << endl;
    cout << "The number of pixels are: " << (whitePixels + blackPixels) << "." << endl;
    
    // Calculating the Number of Stars

    /* for(j=0;j<rows;j++) {
        for(i=0;i<columns;i++) {
            while (img.at<int>(j,i) != 0) {
                i++;
                j++; // Logic to be Found

            }
        }
    } */


    return 0;
}

// TO DO LIST

// 1. Reread and reunderstand the star clustering algorithm in lost-infinity
// 2. Do at least five exercises about classes in C++
// 3. Do at least five exercies about functions in C++