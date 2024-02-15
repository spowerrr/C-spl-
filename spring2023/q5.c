#include <stdio.h>

void f1(int* a, int n1, int n2) {
    for (int i = 0; i < n1; i++) {
        if (*(a + i) % 2 == 1) {
            *(a + i + 1) = *(a + i - 1) - (n2 + i);
        }
    }
}

int main() {
    int arr[] = {6, 3, 2, 7, 0, 1, 5};
    f1(arr, 7, arr[0] - *(arr + 2));

    // Print the contents of the array
    printf("Modified array: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
