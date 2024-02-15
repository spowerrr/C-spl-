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

    // printf("Intersection of arrays A and B: ");
    int foundIntersection=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                foundIntersection=1;
                break;
            }
        }
    }
    if (!foundIntersection) {
        printf("Empty set");
    }
    printf("\n");

    return 0;
}
