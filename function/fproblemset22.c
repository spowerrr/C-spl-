#include <stdio.h>
#include <string.h>

int find_substr(const char a[], const char b[]) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    for (int i = 0; i <= len_a - len_b; i++) {
        int j;
        for (j = 0; j < len_b; j++) {
            if (a[i + j] != b[j]) {
                break;
            }
        }
        if (j == len_b) {
            return 1; // Found substring b in a
        }
    }
    
    return -1; // No match found
}

int main() {
    char string_a[100];
    char string_b[100];

    printf("Enter string a: ");
    scanf("%s", string_a);

    printf("Enter string b: ");
    scanf("%s", string_b);

    int result = find_substr(string_a, string_b);
    
    if (result == 1) {
        printf("String b is found in string a.:: 1\n");
    } else if (result == -1) {
        printf("No match found.::0\n");
    }

    return 0;
}
