#include <stdio.h>

int calculate_factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculate_factorial(num - 1);//recursion 
    }
}

int main() {
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    // Calling the function to calculate the factorial
    int factorial = calculate_factorial(inputNumber);

    printf("Factorial: %d\n", factorial);

    return 0;
}

