#include <stdio.h>

void find_even_numbers(int arr[], int n) {
    printf("Even numbers in the array: ");
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
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

    // Calling the function to find even numbers
    find_even_numbers(numbers, n);

    return 0;
}
