#include <stdio.h>

int main() {
   int num, originalNum, remainder, reversedNum = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   originalNum = num;

   // Reverse the number
   while (num != 0) {
      remainder = num % 10;
      reversedNum = reversedNum * 10 + remainder;
      num /= 10;
   }

   if (originalNum == reversedNum) {
      printf("Yes\n");
   } else {
      printf("No\n");
   }

   return 0;
}
