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

    printf("The Higher CGPA Holder:\n");
    if(students[0].cgpa>students[1].cgpa) {
        printf("Full Name: %s\n", students[0].name);
        printf("ID: %d\n", students[0].id);
        printf("CGPA: %.2f\n", students[0].cgpa);
        //printf("\n");
    } else{
        printf("Full Name: %s\n", students[1].name);
        printf("ID: %d\n", students[1].id);
        printf("CGPA: %.2f\n", students[1].cgpa);
        //printf("\n");
    }
    return 0;
}
