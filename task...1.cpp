#include <iostream>
using namespace std;
int main() {
    const int rows = 3;
    const int cols = 3;

    
    int matrix[rows][cols];

    cout << "Enter elements for the 3x3 matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    
    cout << "Required matrix is :"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

   
    int leftDiagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        leftDiagonalSum += matrix[i][i];
    }

   
    int rightDiagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        rightDiagonalSum += matrix[i][rows - 1 - i];
    }

   
    cout << "Sum of Left Diagonal: " << leftDiagonalSum << endl;
    cout << "Sum of Right Diagonal: " << rightDiagonalSum << endl;

    return 0;
}
