#include <stdio.h>

void InputMatrix(int matrix[3][5]) {
    printf("Enter the elements of the matrix (3x5):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int matrix[3][5]) {
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int matrix[3][5], int scalar) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

int main() {
    int matrix[3][5];
    int scalar;

    InputMatrix(matrix);
    
    printf("Enter a scalar value: ");
    scanf("%d", &scalar);

    printf("Original Matrix:\n");
    ShowMatrix(matrix);

    ScalarMultiply(matrix, scalar);

    printf("\nMatrix after scalar multiplication:\n");
    ShowMatrix(matrix);

    return 0;
}
