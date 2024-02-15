#include <stdio.h>

// Function to input CT marks
void input_CT_marks(float ct_marks[], int n) {
    printf("Enter the marks for each class test:\n");
    for (int i = 0; i < n; i++) {
        printf("Class Test %d: ", i + 1);
        scanf("%f", &ct_marks[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of class tests: ");
    scanf("%d", &n);

    float ct_marks[n];
    input_CT_marks(ct_marks, n);

    printf("You have entered the following marks for class tests:\n");
    for (int i = 0; i < n; i++) {
        printf("Class Test %d: %.2f\n", i + 1, ct_marks[i]);
    }

    return 0;
}
