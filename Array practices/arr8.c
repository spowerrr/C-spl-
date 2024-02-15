#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int pos = 0, pos2 = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            pos = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            pos2 = i;
        }
    }

    printf("Max: %d Position: %d\nMin: %d Position: %d\n", max, pos, min, pos2);

    return 0;
}
