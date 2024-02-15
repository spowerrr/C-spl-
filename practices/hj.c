  #include<stdio.h>
int main()
{
    int count,i;
    int data[count];
    scanf("%d",&count);
    int max=data[0];
    int p1=0;
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&data[count]);
    }
    for (int i = 0; i < count; i++){
        if(max<data[i]){
            max=data[i];
            p1=i;
        }
    }
    printf("max: %d\nposition: %d",max,i);
    return 0;
}
