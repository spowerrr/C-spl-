#include <stdio.h>

int main() {
    int X, N;
    printf("Player-1, enter the number ");
    scanf("%d", &X);
    printf("Player-2, enter the maximum number of tries: ");
    scanf("%d", &N);
    
    int guess;
    
    while (N > 0) {
        printf("Player-2, make a guess: ");
        scanf("%d", &guess);
        
        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            N--;
            printf("Wrong, %d Choice(s) Left!\n", N);
        }
    }
    
    if (N == 0) {
        printf("Player-1 wins!\n");
    }
    
    return 0;
}
