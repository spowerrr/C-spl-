#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Leap year\n");
    } else {                                 //here is a short note that (year is divisible by 4 
                                            //and not divisible by 100) or (year is divisible by 400)
        printf("Not a leap year\n");
    }

    return 0;
}
