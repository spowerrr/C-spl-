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

    // printf("Array before removing duplicates:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", A[i]);
    // }
    // printf("\n");

    // Remove duplicates from the array
    int uniqueArray[n];
    int uniqueSize = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < uniqueSize; j++) {
            if (A[i] == uniqueArray[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            uniqueArray[uniqueSize] = A[i];
            uniqueSize++;
        }
    }

    // printf("Array after removing duplicates:\n");
    for (int i = 0; i < uniqueSize; i++) {
        printf("%d ", uniqueArray[i]);
    }
    printf("\n");

    return 0;
}
