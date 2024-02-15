// C Program to illustrate the use of 1D array
#include <stdio.h>

int main()
{

	// 1d array declaration
	int arr[5];
    printf("Elements of Array: ");
	// 1d array initialization using for loop
	for (int i = 0; i < 5; i++) {
        // printf("Elements of Array: ");
		arr[i] = i * i - 2 * i + 1;
        printf("%d ", arr[i]);
    }
	return 0;
}
