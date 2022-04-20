// STAR CENTROIDING METHOD
// CENTER OF GRAVITY
// This program calculates the center of gravity of a star based on randomly generated gray values
// across a certain number of pixels.

#include <iostream>
#include <ctime>
using namespace std;

int main() {
   
    // Defining Variables

    int nI = 5;             // Number of Horizontal Pixels
    int nJ = 5;             // Number of Vertical Pixels

    int i;                  // Horizontal Pixel Coordinate
    int j;                  // Vertical Pixel Coordinate
    int G[nI][nJ] = {};     // Gray Value (Randomly Generated)

    float sigmaIG = 0;            // Sum of i and G product
    float iG = 0;                 // Product of i and G
    float sigmaJG = 0;            // Sum of j and G product
    float jG = 0;                 // Product of j and G
    float sigmaG = 0;             // Sum of G

    float xc;               // Horizontal Center of Gravity
    float yc;               // Vertical Center of Gravity

    // Defining Gray Value (Randomly Generated)
    
    cout << "\nThe gray value of the stars are: " << endl;
    srand ( time (NULL) );
    for (j = 0; j < nJ; j++) {
        for (i = 0; i < nI; i++) {
           G[i][j] = rand() % 255 + 1;
           cout << G[i][j] << " ";
        }
    }

    cout << endl;

    // Defining Sums
        for (j = 0; j < nJ; j++) {
            for (i = 0; i < nI; i++) {
                iG = (i+1) * G[i][j];
                jG = (j+1) * G[i][j];
                sigmaIG += iG;
                sigmaJG += jG;
                sigmaG += G[i][j];
            }
        }

    // Defining Equations

    xc = sigmaIG/sigmaG;
    yc = sigmaJG/sigmaG;

    cout << "\nThe center of gravity is (" << xc << ", " << yc << ")." << endl;

    return 0;
}