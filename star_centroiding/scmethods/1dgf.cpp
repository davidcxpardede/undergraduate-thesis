// STAR CENTROIDING METHOD
// ONE-DIMENSIONAL GAUSSIAN FITTING

#include <iostream>
#include <ctime>
using namespace std;

int main()
{

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

    cout << endl << endl;

    // Defining Equation
    // In this method, the x and y coordinates of the centroid are determined separately
    // by fitting a 1D Gaussian to the marginal of the gray data
    
    // For the x-marginal e.g., the pixel gray data along each row direction is summed:
    // Gi = SIGMA(Nc,j=1) (g(i,j))
    // Nc is the number of pixels on a row of the chosen window
    // Gi is the sum of the pixel gray on the ith row, which is referred to as the x-marginal

    // The least squares problem is then defined as:
    // min.S(M, sigmax, xc) = SIGMA(Nr,i=1) [Gi-f(i,M,sigmax,xc)]^2
    // where f(i,M,sigmax,xc) is the function to be fit through the marginal data
    // A usually adopted technique is depicted as follows:
    // f(i,M,sigmax,xc) = M exp(-(i-xc)^2/(2*sigmax^2))

    // Zi = HXi + Vi
    // Z = [G1 ln(G1), G2 ln(G2), ..., GNr ln (GNr)]^T
    // H = [G1     G1      G1
    //      G2     2G2     4G2
    //      .      .       .
    //      GNr    NrGNr   Nr^2GNr]
    // X = [ln(M) - (xc^2/(2*sigmax^2)), (xc/sigmax^2), (-1/(2*sigmax^2))]^T

    // So the estimated Vector X is: X = (H^TH)^-1(H^TZ)
    // from which xc can be solved as below:

    // xc = -X(2)/(2*X(3))

    // Solving of another centroid coordinate yc follows the similar way

    return 0;
}