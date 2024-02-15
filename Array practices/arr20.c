#include <stdio.h>

int main() {
    int n;
    // printf("Enter the size of array A: ");
    scanf("%d", &n);

    int A[n];
    // printf("Enter %d integers for array A:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int m;
    // printf("Enter the size of array B: ");
    scanf("%d", &m);

    int B[m];
    // printf("Enter %d positive integers for array B:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    printf("Union of arrays A and B: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    for (int i = 0; i < m; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < n; j++) {
            if (B[i] == A[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            printf("%d ", B[i]);
        }
    }

    printf("\n");

    return 0;
}
