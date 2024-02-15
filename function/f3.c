#include <stdio.h>

void check_even_odd(int num) {
    if (num % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

int main() {
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    // Calling the function to check if the number is even or odd
    // printf("Number %d is ", inputNumber);
    check_even_odd(inputNumber);

    return 0;
}
