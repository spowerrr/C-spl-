#include <stdio.h>
#include <string.h>

int ends_with(char *input, char letter) {
    int length = strlen(input);
    if (length == 0) {
        return 0;  // Empty string can't end with any character
    }
    return input[length - 1] == letter;
}

struct card {
    char name[60];
    int stage;
    int HP;
};

int main() {
    int n, i, price = 0;
    scanf("%d", &n);
    struct card cards[n];
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", cards[i].name, &cards[i].stage, &cards[i].HP);
        price += 50 + cards[i].HP;
        if (cards[i].stage == 1) {
            price += 30;
        } else if (cards[i].stage == 2) {
            price += 70;
        }
        if (ends_with(cards[i].name, 'X')) {
            price += 200;
        }
    }
    printf("%d\n", price);
    return 0;
}
