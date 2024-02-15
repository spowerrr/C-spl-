#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int id;
    float cgpa;
};

int main() {
    
    struct Student students[2];

    
    for (int i = 0; i < 2; i++) {

        printf("Full Name: ");
        scanf(" %[^\n]s", students[i].name); // Read the whole line, including spaces

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    printf("Students Detail's\n");
    for (int i = 0; i < 2; i++) {
        printf("Full Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("CGPA: %.2f\n", students[i].cgpa);
        //printf("\n");
    }

    return 0;
}
