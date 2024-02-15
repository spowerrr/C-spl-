#include<stdio.h>
#include <math.h>
int power_calculate(int n,int a) {
    return pow(n,a);
}

int main() {
    int n,a;

    // printf("Enter a number: ");
    scanf("%d %d", &n,&a);

    int power = power_calculate(n,a);

    printf("Result: %d\n", power);

    return 0;
}