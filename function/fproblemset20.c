#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int GenNthPrime(int N) {
    if (N <= 0) {
        printf("Invalid input. N should be a positive integer.\n");
        return -1;
    }
    
    int primeCount = 0;
    int num = 2;
    while (primeCount < N) {
        if (isPrime(num)) {
            primeCount++;
        }
        num++;
    }
    
    return num - 1;
}

int main() {
    int N;
    printf("Enter N to find the Nth prime number: ");
    scanf("%d", &N);

    int nthPrime = GenNthPrime(N);
    if (nthPrime != -1) {
        printf("The %dth prime number is: %d\n", N, nthPrime);
    }

    return 0;
}
