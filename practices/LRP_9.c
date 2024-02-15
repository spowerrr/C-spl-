#include<stdio.h>
int main(){
   int n;
   float A,HW,CT,MT,TF;
   scanf("%d",&n);
   
   for (int i = 1; i <= n; i++)
   {
    printf("Enter the numbers(A,HW,CT,MT,TF)");
    scanf("%f %f %f %f %f",&A,&HW,&CT,&MT,&TF);
    float SUM=0.0;
    MT=(30.0/50)*MT;
    TF=(40.0/100)*TF;
    SUM=SUM+MT+TF+A+HW+CT;
    //printf("%f",SUM);
    if(SUM>=90 && SUM<=100){
        printf("Student %d: A\n",i);
    } else if(SUM>=86 && SUM<=89){
        printf("Student %d: A-\n",i);
    }else if(SUM>=82 && SUM<=85){
        printf("Student %d: B+\n",i);
    }else if(SUM>=78 && SUM<=81){
        printf("Student %d: B\n",i);
    }else if(SUM>=74 && SUM<=77){
        printf("Student %d: B-\n",i);
    }else if(SUM>=70 && SUM<=73){
        printf("Student %d: C+\n",i);
    }else if(SUM>=66 && SUM<=69){
        printf("Student %d: C\n",i);
    }else if(SUM>=62 && SUM<=65){
        printf("Student %d: C-\n",i);
    }else if(SUM>=58 && SUM<=61){
        printf("Student %d: D+\n",i);
    }else if(SUM>=55 && SUM<=57){
        printf("Student %d: D\n",i);
    }else if(SUM<55){
        printf("Student %d: F\n",i);
    }
   }

   return 0;
}