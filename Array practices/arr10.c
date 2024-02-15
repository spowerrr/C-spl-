#include <stdio.h>

int main(void) {
    int n, srch_num;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &srch_num);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (srch_num == num[i]) {
            printf("FOUND at index position: ");

            for (int j = 0; j < n; j++) {
                if (srch_num == num[j]) {
                    printf("%d, ", j);
                }
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("NOT FOUND");
    }

    return 0;
}
