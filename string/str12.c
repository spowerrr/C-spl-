#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0;  // Initialize a counter for matching words
    char str[100];    // Declare a character array to store input text
    gets(str);        // Read input text

    char word[50];    // Declare a character array to store the word to be searched
    gets(word);       // Read the word to be searched

    int str_len = strlen(str);   // Calculate the length of the input text
    int word_len = strlen(word); // Calculate the length of the word to be searched

    // Shift characters in the input text to create space for the new word
    for(int i = str_len; i >= 0; i--)
    {
        str[i + 1] = str[i];
    }
    
    // Shift characters in the word to be searched to create space for a space character
    for(int i = word_len; i >= 0; i--)
    {
        word[i + 1] = word[i];
    }

    str[0] = ' ';  // Add a space character at the beginning of the input text
    word[0] = ' '; // Add a space character at the beginning of the word to be searched

    strcat(str, " "); // Append a space character to the input text
    strcat(word, " "); // Append a space character to the word to be searched

    // Loop through the input text to find occurrences of the word
    for(int i = 0; str[i] != '\0'; i++)
    {
        int flag = 0; // Initialize a flag to check if the word is found

        // Compare the characters of the word with the corresponding characters in the input text
        for(int j = 0; word[j] != '\0'; j++)
        {
            if(word[j] != str[i + j]) // If characters don't match
                flag = 1; // Set the flag to indicate non-matching
        }

        if(flag == 0) // If the flag remains 0, it means the word is found
            count++; // Increment the counter of matching words
    }

    printf("%d", count); // Print the count of matching words

    return 0;
}
