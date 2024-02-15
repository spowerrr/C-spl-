  #include<stdio.h>
int main()
{
    int count,max=0,p1=0;
    int data[count];
    scanf("%d",&count);
    max=data[0];
    p1=0;
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&data[i]);
    }
    for (int i = 0; i < count; i++){
        if(max<data[i]){
            max=data[i];
            p1=i;
        }
    }
    printf("max: %d\n position: %d",max,i);
    return 0;
}
