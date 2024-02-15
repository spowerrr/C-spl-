#include <stdio.h>

// Function to input CT marks and find the highest mark
void input_CT_marks(float ct_marks[], int n) {
    printf("Enter the marks for each class test:\n");
    for (int i = 0; i < n; i++) {
        printf("Class Test %d: ", i + 1);
        scanf("%f", &ct_marks[i]);
    }
}

// Function to find the highest CT mark
float take_Highest_CT(float ct_marks[], int n) {
    float max = ct_marks[0];
    for (int i = 1; i < n; i++) {
        if (ct_marks[i] > max) {
            max = ct_marks[i];
        }
    }
    return max; // Return the highest mark
}

int main() {
    int n;
    printf("Enter the number of class tests: ");
    scanf("%d", &n);

    float ct_marks[n];
    input_CT_marks(ct_marks, n);

    float highest_mark = take_Highest_CT(ct_marks, n);
    printf("The highest of all CT marks: %.2f\n", highest_mark);

    return 0;
}
