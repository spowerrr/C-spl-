 #include<stdio.h>
 int main()
 {
     int n;
     scanf("%d",&n);

     for(int i=1;i<=n;i++)
     {
         if(i<=n/2+1)
         {
             for(int j=1; j<=(n/2)+i; j++)
             {
                 if(j<=(n/2+1-i))
                    printf("_");
                 else
                    printf("*");
             }
         }
         else
         {
             for(int j=1; j<=n-(i-(n/2+1)); j++)
             {
                 if(j<=i-(n/2+1))
                    printf("_");
                 else
                    printf("*");
             }
         }

         printf("\n");
     }

     return 0;
 }
