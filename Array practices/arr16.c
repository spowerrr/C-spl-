#include <stdio.h>

int main() {
    int n;
    // printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    // printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if (i % 2 != 0) {
            A[i] = 0;
        }
    }

    // printf("Array after replacement:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    // printf("\n");

    return 0;
}
