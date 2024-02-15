// C Program to demonstrate array initialization
#include <stdio.h>

int main()
{

	// array initialization using initialier list
	int arr[5] = { 10, 20, 30, 40, 50 };
	arr[3]=60;

	// array initialization using initializer list without
	// specifying size
	int arr1[] = { 1, 2, 3, 4, 5 };
	arr1[3]=6;

	// array initialization using for loop
	printf("Enter the elements: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ",arr[i]);
	}
	printf("\nEnter the elements: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ",arr1[i]);
	}
	return 0;
}
