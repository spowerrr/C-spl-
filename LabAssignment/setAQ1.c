#include <stdio.h>

int is_prime(int x)
{
    if (x <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int digit_sum(int x)
{
    int sum = 0; // Initialize sum to 0
    while (x > 0)
    {
        int digit;
        digit = x % 10; // Get the last digit.
        sum += digit;   // Add the digit to the sum.
        x /= 10;
    }
    return sum;
}

int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);

    for (int num = a; num <= b; num++)
    {
        sum = digit_sum(num);
        if (is_prime(sum) == 1 && is_prime(num) == 1)
        {
            printf("Superprime: %d\n", num);
        }
    }
    return 0;
}
