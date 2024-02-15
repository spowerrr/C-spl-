#include <stdio.h>

int main() {
    int n;
    // printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    // printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int position;
    // printf("Enter the position to delete (0-%d): ", n-1);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position >= n) {
        printf("Invalid position.\n");
        return 0;
    }

    // Shift elements to the left to overwrite the element at the specified position
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease the size of the array

    // printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
