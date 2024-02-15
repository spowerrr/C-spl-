#include <stdio.h>

// Define the Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
    int scores[12];
};

int main() {
    int N; // Specify the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &N);
    
    // Declare an array of Employee structures with size N
    struct Employee employees[N];

    // Input data for each employee
    for (int i = 0; i < N; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); // Read the entire line, including spaces

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Enter 12 performance scores for the last 12 months:\n");
        for (int j = 0; j < 12; j++) {
            scanf("%d", &employees[i].scores[j]);
        }
    }

    // Calculate and check average performance scores for each employee
    for (int i = 0; i < N; i++) {
        float sum = 0.0;
        for (int j = 0; j < 12; j++) {
            sum += employees[i].scores[j];
        }
        float average = sum / 12;

        // Check eligibility for increment
        if (average > 80) {
            printf("Employee with id=%d is eligible for increment.\n", employees[i].id);
        } else {
            printf("Employee with id=%d is not eligible for increment.\n", employees[i].id);
        }
    }

    return 0;
}
