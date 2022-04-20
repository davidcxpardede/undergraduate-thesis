// RANDOM STAR GENERATOR
// This program generates stars by assigning random gray value to a pixel
// across several clusters of pixels that act as stars in a certain field of view.

// Logic
// 1. Assign random CG location across the field of view
//    The distance between CG is at least three times maximum star radius
// 2. Assign random gray value around the declared CGs with certain radius
//    The values are assigned from 1 - 255. The further away from the CG, the smaller the value.

#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int fI = 500; // Number of Pixels of the Field of View in the x-axis
    int fJ = 500; // Number of Pixels of the Field of View in the y-axis
    int r = 5;  // Star Common Radius
    int d = 15 * r;
    int n = fI/d;      // Effective star numbers

    int G;  // Gray values
    int i; // Pixel Location in the x-axis
    int j; // Pixel Location in the y-axis

    int cgiI;   // Initial Location of CG in the x-axis
    int cgiJ; // Initial Location of CG in the y-axis

    int image[fI][fJ] = {};    // Matrix that stores the pixels value
    int cg[n][2] = {}; // Matrix that stores the initial CG values
    int cgd[n][2] = {};  // Matrix that stores the used initial CG values

    srand ( time (NULL) );

    // Assigning Initial CGs
    int i1 = 0;
    int i2 = 1;
    int i3 = 0;
    int ci, cj;
    
    cg[0][0] = {r + rand() % (fI - r + 1)};
    cg[0][1] = {r + rand() % (fJ - r + 1)};

    cgd[0][0] = cg[0][0];
    cgd[0][1] = cg[0][1];

    

    for (i1 = 1; i1 < n; i1++) {
        cg[i1][0] = {r + rand() % (fI - r + 1)};
        cg[i1][1] = {r + rand() % (fJ - r + 1)};

        i3 = i1;
        i2 = 1;

        while (i2 <= i3) {
            ci = abs(cg[i1][0] - cgd[i1-i2][0]);
            cj = abs(cg[i1][1] - cgd[i1-i2][1]);

            if ((ci < d) && (cj < d)) {
                i1 = i1 - 1;
                i2 = i3 + 1;
            }

            else {
                i2++;
                
                cgd[i1][0] = cg[i1][0];
                cgd[i1][1] = cg[i1][1];
            }
        }
    }

    cout << "\nPixel number: " << fI << " x " << fJ << endl;
    cout << "Star radius: " << r << endl;
    cout << "Effective star number: " << n << endl;
    cout << "Star minimum distance: " << d << endl << endl;

    for(i1 = 0; i1 < n; i1++) {
        cout << "CG" << i1 + 1 << ": " << cg[i1][0] << ", " << cg[i1][1] << endl;
        image[(cg[i1][0])][(cg[i1][1])] = 1;
    }
    
    cout << endl;

    // cout << "\nImage: " << endl;
    for (i1 = 0; i1 < fI; i1++) {
        for (i2 = 0; i2 < fJ; i2++) {
            
        // cout << image[i1][i2] << " ";
        // Showing the image in terms of matrix
        }
    }
    return 0;
}