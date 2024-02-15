#include <stdio.h>

int main() {
    int n;
    // printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    // printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 3 == 0) {
            A[i] = -1;
        }
    }

    // printf("Array after replacement:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
