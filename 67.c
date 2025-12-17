#include <stdio.h>

int main() {
    int matrix[3][3];
    int isSymmetric = 1, isSkewSymmetric = 1;

    // Input matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check conditions
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
            }

            if (matrix[i][j] != -matrix[j][i]) {
                isSkewSymmetric = 0;
            }

            // Diagonal must be zero for skew-symmetric
            if (i == j && matrix[i][j] != 0) {
                isSkewSymmetric = 0;
            }
        }
    }

    // Output result
    if (isSymmetric) {
        printf("The matrix is Symmetric\n");
    } 
    else if (isSkewSymmetric) {
        printf("The matrix is Skew-Symmetric\n");
    } 
    else {
        printf("The matrix is neither Symmetric nor Skew-Symmetric\n");
    }

    return 0;
}
