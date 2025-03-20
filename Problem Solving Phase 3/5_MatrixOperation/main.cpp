#include <iostream>
#include "matrix.h"
using namespace std;

int main() 
{
    /*
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    */
    int matrix[3][3];
    int transposed[3][3];
    cout << "Enter the elements of a 3x3 matrix row by row:" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);
    transposeMatrix(matrix, transposed);
    cout << "Transposed Matrix:" << endl;
    printMatrix(transposed);
    return 0;
}