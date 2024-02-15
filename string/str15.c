#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];        // Declare a character array to store input text
    gets(str);            // Read input text

    int n = strlen(str);  // Calculate the length of the input text

    strrev(str);          // Reverse the entire input string
    strcat(str, " ");     // Append a space character to the end of the string

    int w_strt = 0;       // Initialize a variable to track the start of a word

    // Loop through the modified string to reverse individual words
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')  // If a space character is encountered
        {
            // Loop to reverse characters within a word
            for(int j = 0; j <= ((i - w_strt) / 2) - 1; j++)
            {
                char temp_l = str[j + w_strt];     // Temporary storage for left character
                str[j + w_strt] = str[i - 1 - j];  // Swap left and right characters
                str[i - 1 - j] = temp_l;            // Store the temporary left character
            }
            w_strt = i + 1;  // Update the start position for the next word
        }
    }

    str[n] = '\0';  // Terminate the string at its original length
    puts(str);      // Print the modified string

    return 0;
}
