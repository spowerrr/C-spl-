#include <stdio.h>
#include <string.h>

int isConsonant(char ch) {
    // Check if the character is a consonant (not a vowel or non-alphabetical character)
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                return 0; // It's a vowel
            default:
                return 1; // It's a consonant
        }
    } else {
        return 0; // It's not an alphabet character
    }
}

char replaceConsonant(char ch) {
    // Replace the consonant with the next one in the alphabet
    if ((ch >= 'a' && ch < 'z') || (ch >= 'A' && ch < 'Z')) {
        return ch + 1;
    } else if (ch == 'z') {
        return 'a';
    } else if (ch == 'Z') {
        return 'A';
    } else {
        return ch; // Not an alphabet character, so no change
    }
}

int main() {
    char message[1000];
    
    printf("Enter a message: ");
    //fgets(message, sizeof(message), stdin);
    scanf("%[^\n]s",message);
    int length = strlen(message);
    
    for (int i = 0; i < length; i++) {
        if (isConsonant(message[i])) {
            message[i] = replaceConsonant(message[i]);
        }
    }
    
    printf("Modified message: %s\n", message);
    
    return 0;
}
