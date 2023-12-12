#include <iostream>
using namespace std;

void transposeMatrix(const int matrix[3][3], int result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;

    
    int matrix[rows][cols] =  {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    
    int result[rows][cols];

    
    transposeMatrix(matrix, result);

    
    cout << "Original Matrix:"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Transpose Matrix:"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
