#include <stdio.h>

void InputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int matrix[][100], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int matrix[][100], int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

int main() {
    int matrix[100][100];
    int rows, cols, scalar;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    InputMatrix(matrix, rows, cols);
    
    printf("Enter a scalar value: ");
    scanf("%d", &scalar);

    printf("Original Matrix:\n");
    ShowMatrix(matrix, rows, cols);

    ScalarMultiply(matrix, rows, cols, scalar);

    printf("\nMatrix after scalar multiplication:\n");
    ShowMatrix(matrix, rows, cols);

    return 0;
}
