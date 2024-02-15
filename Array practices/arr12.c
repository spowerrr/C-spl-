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

    int num, position;
    // printf("Enter the number to insert: ");
    scanf("%d", &num);
    // printf("Enter the position to insert (0-%d): ", n-1);
    scanf("%d", &position);
    if (position < 0 || position > n-1) {
        printf("Invalid position.\n");
        return 0;
    }
    for (int i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = num;
    n++;

    // printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
