#include <stdio.h>

void print_array_reverse(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    // printf("\n");
}

int main() {
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calling the function to print the array in reverse order
    printf("Array in reverse order: ");
    print_array_reverse(numbers, n);

    return 0;
}
