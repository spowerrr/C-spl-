#include<stdio.h>
int main()
{
    char str[100];          // Declare a character array to store input text
    int alpf[26] = {0};     // Initialize an array to store frequency of each alphabet

    gets(str);              // Read input text

    // Loop through the input text to process each character
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32; // Convert lowercase letters to uppercase

        alpf[str[i] - 'A']++; // Increase the count for the corresponding alphabet
    }

    int max = alpf[0];       // Initialize the maximum frequency
    int in = 0;              // Initialize the index of the alphabet with maximum frequency

    // Find the alphabet with the maximum frequency
    for(int i = 0; i < 26; i++)
    {
        if(max < alpf[i])
        {
            max = alpf[i];
            in = i;
        }
    }

    // Print the alphabet with the maximum frequency (both uppercase and lowercase)
    printf("%c (or %c)", in + 'A', in + 'a');

    return 0;
}
