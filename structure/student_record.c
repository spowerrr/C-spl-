#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    int age;
    float marks;
};

int main() {
    struct Student students[3];

    for (int i = 1; i <= 3; i++) {
        printf("Enter details for student %d:\n", i);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll Number: %d, Age: %d, Marks: %.2f\n",
               students[i].name, students[i].rollNumber, students[i].age, students[i].marks);
    }

    return 0;
}
