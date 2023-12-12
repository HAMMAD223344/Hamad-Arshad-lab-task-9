#include <iostream>
#include <cmath>

using namespace std;


double determinant2x2(double a, double b, double c, double d) {
    return a * d - b * c;
}


double determinant(double mat[3][3]) {
    return mat[0][0] * determinant2x2(mat[1][1], mat[1][2], mat[2][1], mat[2][2]) -
           mat[0][1] * determinant2x2(mat[1][0], mat[1][2], mat[2][0], mat[2][2]) +
           mat[0][2] * determinant2x2(mat[1][0], mat[1][1], mat[2][0], mat[2][1]);
}


void transpose(double mat[3][3], double result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = mat[j][i];
}


void cofactor(double mat[3][3], double result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            double temp[2][2];
            int row = 0, col = 0;
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    if (k != i && l != j) {
                        temp[row][col++] = mat[k][l];
                        if (col == 2) {
                            col = 0;
                            row++;
                        }
                    }
                }
            }
            result[i][j] = sign * determinant2x2(temp[0][0], temp[0][1], temp[1][0], temp[1][1]);
        }
    }
}


bool inverse(double mat[3][3], double result[3][3]) {
    
    double det = determinant(mat);

    
    if (det == 0) {
        cout << "Inverse does not exist, as determinant is zero." << endl;
        return false;
    }

    
    double adj[3][3];
    cofactor(mat, adj);
    transpose(adj, result);

    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] /= det;

    return true;
}

int main() {
    double mat[3][3];
    

    
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat[i][j];

    double inv[3][3];

    
    if (inverse(mat, inv)) {
        
        cout << "Inverse Matrix:" << endl;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j)
                cout << inv[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
