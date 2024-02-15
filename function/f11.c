#include <stdio.h>
#include <string.h>

int calculate_string_length(char *str) {
    
    int i;
    for(i=0;str[i]!='\0';i++);
    
    return i;
}

int main() {
    char inputString[100];  // Assuming a maximum length of 100 characters for the input string
    
    printf("Enter a string: ");
    //fgets(inputString, sizeof(inputString), stdin);
    scanf("%[^\n]s",inputString);
    // Removing the newline character from the input (if present)
    int length = strlen(inputString);
    if (inputString[length - 1] == '\n') {
        inputString[length - 1] = '\0';
    }
    
    // Calling the function to calculate the string length
    int stringLength = calculate_string_length(inputString);
    
    printf("String length: %d\n", stringLength);

    return 0;
}
