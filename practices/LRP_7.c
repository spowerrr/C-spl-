#include<stdio.h>
int main(){
   char input;
   int count=1;
   while (1)
   {
    printf("Enter the character: ");
    scanf(" %c",&input);  // Added a space before %c to ignore whitespace characters
    
    if(input=='A'){
        break;
    }
    printf("Input %d: %c\n",count,input);
    count++;
    
   }
   
   return 0;
}
