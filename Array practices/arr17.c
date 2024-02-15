#include <stdio.h>

int main() {
    int n;
    // printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    // printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // printf("Array before sorting:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", A[i]);
    // }
    // printf("\n");

    // Sort the array in ascending order using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // printf("Array after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    // printf("\n");

    return 0;
}
