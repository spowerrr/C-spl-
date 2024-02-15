#include<stdio.h>

int main(){
    int n, count;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int data[n];

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }

    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(data[j] == data[i]){
                count++;
            }
        }
        if(count > 0){
            printf("%d occurred %d times\n", data[i], count);
        }
    }

    return 0;
}
