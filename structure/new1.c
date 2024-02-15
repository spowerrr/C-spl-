#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    float marks;
    char name[30];
};

int main(){
   struct student Puspo,Karim,Rahul;
   Puspo.id=304;
   Puspo.marks=76.5;

   Karim.id=305;
   Karim.marks=72.5;

    Rahul.id=306;
    Rahul.marks=70.5;

   strcpy(Puspo.name,"Puspo, student of the year");
   printf("Puspo(ID: %d) got %.1f marks\n",Puspo.id,Puspo.marks);
   printf("Karim(ID: %d) got %.1f marks\n",Karim.id,Karim.marks);
   printf("Rahul(ID: %d) got %.1f marks\n",Rahul.id,Rahul.marks);
   printf("%s",Puspo.name);
   return 0;
}