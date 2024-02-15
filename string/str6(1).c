#include <stdio.h>

int main() {
    char str[100];

    // Input the lowercase string
    printf("Enter a lowercase string: ");
    gets(str);

    // Iterate through the string and convert to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter (ASCII range 'a' to 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            //str[i] = str[i] - 32;
            str[i]-=32;
        }
    }

    // Print the uppercase string
    printf("Uppercase string: %s\n", str);

    return 0;
}
