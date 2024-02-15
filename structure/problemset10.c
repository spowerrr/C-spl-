//You have to declare a structure named triangle. triangle_id, base and height
//are the members of this structure. Now you will have to take input of
//three triangles and find out the area of each triangle.
//[Triangle Area = (base*height)/2]
#include<stdio.h>
#include<math.h>
struct triangle
{
    int triangle_id;
    float base;
    float height;
    float Area;
};
int main()
{
    struct triangle triangles[3];
    for(int i=0;i<3;i++){
       scanf("%d",&triangles[i].triangle_id);
       scanf("%f",&triangles[i].base);
       scanf("%f",&triangles[i].height);
       triangles[i].Area= (triangles[i].base*triangles[i].height)/2;
    }
    printf("Showing Results:\n");
    for (int  i = 0; i < 3; i++)
    {
        printf("Triangle %d Area: %.2f\n", triangles[i].triangle_id, triangles[i].Area);
        //printf("%f",triangles[i].Area);
    }
    
}
