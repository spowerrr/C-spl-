#include <stdio.h>

void print_character(char c) {
    printf("The character is: %c\n", c);
}

int main() {
    char inputChar;
    printf("Enter a character: ");
    scanf("%c", &inputChar);
    
    // Calling the function to print the input character
    print_character(inputChar);
    
    return 0;
}
