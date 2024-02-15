#include <stdio.h>
#include <string.h>
struct Books {
   char  title[50];
   char  author[50];
   char  group;
   int   book_id;
};

int main() {
    struct Books book1,book2;
    strcpy( book1.title, "Telecom Billing");
    strcpy( book1.author, "Zara Ali");
    book1.group = 'A';
    book1.book_id = 1;

    strcpy( book2.title, "C programming");
    strcpy( book2.author, "Nuha Ali");
    book2.group = 'C';
    book2.book_id = 2;


   printf( "Book title : %s\n", book1.title);
   printf( "Book author : %s\n", book1.author);
   printf( "Book group : %c\n", book1.group);
   printf( "Book book_id : %d\n", book1.book_id);

   printf( "Book title : %s\n", book2.title);
   printf( "Book author : %s\n", book2.author);
   printf( "Book group : %c\n", book2.group);
   printf( "Book book_id : %d\n", book2.book_id);
}