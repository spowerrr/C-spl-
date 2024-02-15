#include <stdio.h>

// Function to input CT marks
float input_CT_marks(float ct_marks[], int n) {
    printf("Enter the marks for each class test:\n");
    for (int i = 0; i < n; i++) {
        printf("Class Test %d: ", i + 1);
        scanf("%f", &ct_marks[i]);
    }
    float max=ct_marks[0];
    //int index=0;
    for (int i = 0; i < n; i++) {
        if(ct_marks[i]>max){
            max=ct_marks[i];
            //index=i;
            }
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of class tests: ");
    scanf("%d", &n);

    float ct_marks[n];
    float highestMark=input_CT_marks(ct_marks, n);

    printf("The highest of the all CT marks:%.2f\n",highestMark);

    return 0;
}
