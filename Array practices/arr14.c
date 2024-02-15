#include <stdio.h>
// There is a mistake need to corect it first
int main() {
    int n;
    printf("Enter the size of array A: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d integers for array A:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int m;
    printf("Enter the size of array B: ");
    scanf("%d", &m);

    int B[m];
    printf("Enter %d integers for array B:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Swap elements between A and B
    int temp;
    int maxSize = (n > m) ? n : m;
    for (int i = 0; i < maxSize; i++) {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    printf("Elements of array A after swapping:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Elements of array B after swapping:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
