#include <stdio.h>

int calculate_sum(int numbers[], int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    
    return sum;
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
    
    // Calling the function to calculate the sum of numbers
    int sumInFunction = calculate_sum(numbers, n);
    
    printf("Sum In Function: %d\n", sumInFunction);
    printf("Sum In Main: %d\n", sumInFunction);
    
    return 0;
}
