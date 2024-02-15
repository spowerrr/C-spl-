#include<stdio.h>

int main()
{
    int count, max = 0, p1 = 0;

    printf("Enter the count: ");
    scanf("%d", &count);

    int data[count];

    for (int i = 0; i < count; i++)
    {
        printf("Enter data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < count; i++)
    {
        if (max < data[i])
        {
            max = data[i];
            p1 = i;
        }
    }

    printf("max: %d\nposition: %d", max, p1);
    return 0;
}
