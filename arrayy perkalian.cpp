#include <iostream>
using namespace std;

int main() {
    int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int B[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int C[3][3] = { 0 };

    const int n = sizeof(A) / sizeof(A[0]);

    // Perkalian matriks: C = A × B
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    // Output
    cout << "Hasil:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << C[i][j] << "\t";
        cout << "\n";
    }

    return 0;
}