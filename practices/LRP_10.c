#include <stdio.h>

int main() {
    int n,sum = 0;

    // printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++ ) {
        if (i%2!=0)
        {
            sum +=i;
        }
        else {
            sum-=i;
        }
    }

    printf("The sum of the first %d terms in the series is: %d\n", n,sum);

    return 0;
}
