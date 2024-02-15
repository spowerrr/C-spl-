#include <stdio.h>

void Get_Number_And_Base(int *N, int *B) {
    do {
        printf("Enter a positive integer: ");
        scanf("%d", N);

        printf("Enter the base: ");
        scanf("%d", B);

        if (*B < 2 || *B > 16) {
            printf("Base not within proper range!\n");
        }
    } while (*B < 2 || *B > 16);
}

void Convert_Number(int N, int B, char result[]) {
    int index = 0;
    while (N > 0) {
        int remainder = N % B;
        if (remainder < 10) {
            result[index++] = '0' + remainder;
        } else {
            result[index++] = 'A' + remainder - 10;
        }
        N /= B;
    }
    result[index] = '\0';

    // Reverse the result string
    int i = 0, j = index - 1;
    while (i < j) {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
        i++;
        j--;
    }
}

void Show_Converted_Number(char result[], int B) {
    printf("Converted value in base %d: %s\n", B, result);
}

int main() {
    int N, B;
    char result[100];

    Get_Number_And_Base(&N, &B);
    Convert_Number(N, B, result);
    Show_Converted_Number(result, B);

    return 0;
}
