#include <stdio.h>

void check_positive_negative_zero(int num) {
    if (num > 0) {
        printf("positive\n");
    } else if (num < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }
}

int main() {
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    // Calling the function to check if the number is positive, negative, or zero
    // printf("Number %d is ", inputNumber);
    check_positive_negative_zero(inputNumber);

    return 0;
}
