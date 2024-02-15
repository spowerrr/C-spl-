#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int num, sum = 0;

    // Open the input file for reading
    inputFile = fopen("E:\\codes\\t1.txt", "r");

    // Check if the input file exists and can be opened
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Read integers from the input file
    while (fscanf(inputFile, "%d", &num) == 1) {
        // Check if the number is divisible by 7
        if (num % 7 == 0) {
            sum += num;
        }
    }

    // Close the input file
    fclose(inputFile);

    // Open the output file for writing
    outputFile = fopen("E:\\codes\\sum.txt", "w");

    // Check if the output file can be opened
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    // Write the sum to the output file
    fprintf(outputFile, "Sum: %d\n", sum);

    // Close the output file
    fclose(outputFile);

    printf("Sum: %d\n", sum);

    return 0;
}
