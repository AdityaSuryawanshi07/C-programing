#include<stdio.h>
#include<string.h>


struct Books{   //Declare elements in Structure

char title[50];
char author[100];
char subject[50];
int book_id;

};

void main(){

  struct Books Books1; // Declare object
  struct Books Books2;

  //  Books1  Specification  //

  strcpy(Books1.title,"C Programing");
  strcpy(Books1.author,"Aditya");
  strcpy(Books1.subject,"CodeWithAditya");
   Books1.book_id=1221;
 

printf("Books1 Title: %s \n ",Books1.title);
  printf("Books author: %s \n ",Books1.author);
  printf("Books subject: %s \n ",Books1.subject);
  printf("Books1 ID: %d \n ",Books1.book_id);

  printf("-----------------------------------\n");

  strcpy(Books2.title,"Python Programing");
  strcpy(Books2.author,"Pankaj Chouhan");
  strcpy(Books2.subject,"CodeWithPankaj");
   Books2.book_id=1222;
 

printf("Books Title: %s \n ",Books2.title);
  printf("Books author: %s \n ",Books2.author);
  printf("Books subject: %s \n ",Books2.subject);
  printf("Books1 ID: %d \n ",Books2.book_id);


   
}