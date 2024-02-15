 #include<stdio.h>
 int main()
 {
     int n;
     scanf("%d",&n);

     for(int i=1; i<=n; i++)
     {
         for(int j=1; j<=n; j++)
            {
                if(j==(n/2+2-i)||j==(n/2+i)||j==((n/2+1))||i==(n/2+1)||j==(i-n/2)||j==(n-(i-(n/2+1))))
                    printf("$");
                else
                    printf("_");
            }
            printf("\n");
     }
     return 0;
 }
