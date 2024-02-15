// C program to show use of
// call by Reference
#include <stdio.h>

void swap(int *var1, int *var2)
{
int temp = *var1;
*var1 = *var2;
*var2 = temp;
}

// Driver code
int main()
{
int var1 = 3, var2 = 2;
printf("Before swap Value of var1 and var2 is: %d, %d\n",
		var1, var2);
swap(&var1, &var2);
printf("After swap Value of var1 and var2 is: %d, %d",
		var1, var2);
return 0;
}
