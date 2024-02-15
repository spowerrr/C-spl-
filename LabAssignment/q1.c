#include <stdio.h>


int is_prime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0 ) {
            return 0; 
        }
    }
    return 1; 
}


int power_of_2(int x) {
    if (x == 1) {
        return 1; 
    }
    if (x < 1 || x % 2 != 0) {
        return 0; 
    }
    return power_of_2(x / 2); 
}


int is_mersenne(int x) {
    if (!is_prime(x)) {
        return 0; 
    }
    return power_of_2(x + 1); 
}

int main() {
    int sample_input;
    scanf("%d",&sample_input);
    

        if (is_mersenne(sample_input)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }

    return 0;
}
