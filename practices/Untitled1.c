
#include <stdio.h>

// Driver code
int main() {
  int i ;
  printf("Enter the value:");
  scanf("%d",&i);
  switch (i) {
    case 1:
      printf("It is the first digit\n");break;
    case 2:
      printf("It is the second digit\n");break;
    case 3:
      printf("It is the third digit\n");break;
    case 4:
      printf("It is the fourth digit\n");break;
    default:
      printf("Wrong input!!! Try again with 1/2/3/4 key......\n");break;
  }
}
