#include <stdio.h>

struct triangle {
    int triangle_id;
    float base;
    float height;
    float Area;
};

// Function to find the triangle with the maximum area
int findMaxAreaTriangle(struct triangle triangles[], int n) {
    int maxIndex = 0;
    float maxArea = triangles[0].Area;

    for (int i = 1; i < n; i++) {
        if (triangles[i].Area > maxArea) {
            maxIndex = i;
            maxArea = triangles[i].Area;
        }
    }

    return maxIndex;
}

int main() {
    struct triangle triangles[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter triangle ID: ");
        scanf("%d", &triangles[i].triangle_id);

        printf("Enter base: ");
        scanf("%f", &triangles[i].base);

        printf("Enter height: ");
        scanf("%f", &triangles[i].height);

        triangles[i].Area = (triangles[i].base * triangles[i].height) / 2;
    }

    int maxIndex = findMaxAreaTriangle(triangles, 3);

    printf("Triangle with maximum area:\n");
    printf("Triangle ID: %d\n", triangles[maxIndex].triangle_id);
    //printf("Base: %.2f\n", triangles[maxIndex].base);
    //printf("Height: %.2f\n", triangles[maxIndex].height);
    printf("Area: %.2f\n", triangles[maxIndex].Area);

    return 0;
}
