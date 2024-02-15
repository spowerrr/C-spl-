#include <stdio.h>
#include <string.h>

void main() {
    char str1[100] = "This journey is";
    char str2[100] = "beautiful";
    int j;

    // Initial values
    // str1: "This journey is"
    // str2: "beautiful"

    strncpy(str1, str2, 8);
    //printf("%s\n",str1);
    //printf("%s",str2);

    // After strncpy
    // str1: "beautifu journey is"
    // str2: "beautiful"

    for (j = 3; str1[j] != '\0'; j++) {
        str1[j] = str2[strlen(str1) - j];
    }

    // After the for loop
    // str1: "beaaua journey is"
    // str2: "beautiful"

    strncat(str2, str1, 3);

    // After strncat
    // str1: "beaaua journey is"
    // str2: "beautifulbea"

    printf("String 1:%s\n", str1);
    str2[j - 2] = '\0';

    // After the null-termination
    // str1: "beaaua journey is"
    // str2: "bea"

    printf("String 2: %s\n", str2);

    for (j = 5; j > 2; j--) {
        //The strrev function is not a standard C function,
        //so this part of the code may not work as expected.
    }

    //str1 remains the same as "beaaua journey is"

    printf("Final: %s", str1);
}
