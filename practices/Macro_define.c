// C program to illustrate macros
#include <stdio.h>

// Multi-line Macro definition
#define ELEL 1, \
			2, \
			3, \
            4

// Driver Code
int main()
{

	// Array arr[] with elements
	// defined in macros
	int arr[] = { ELEL };

	// Print elements
	printf("Elements of Array are:\n");

	for (int i = 0; i <= 3; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
