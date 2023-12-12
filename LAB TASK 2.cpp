#include <iostream>
using namespace std;

void addMatrices(const int matrix1[3][3], const int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;

    
    int matrix1[rows][cols] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    int matrix2[rows][cols] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};

    
    int result[rows][cols];

    
    addMatrices(matrix1, matrix2, result);

    
    cout << "Resultant Matrix after Addition:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
