#include <stdio.h>

 int main(){

   int num1;
   int num2;
   int num3;
   int num4;

   num1 = 11;
   num2 = 20;
   num3 = 15;
   num4 = 25;

   if(num1 < num2 && num1< num3 && num1 < num4){
     printf("Number 1 is smaller... \n");
   }else{
     if(num2 < num1 && num2< num3 && num2 < num4){
       printf("Number 2 is smaller....\n");
     }else{
       if(num3 < num1 && num3< num2 && num3 < num4){
         printf("Number 3 is smaller...\n");
       }else{
         printf("Number 4 is smaller...\n");

         return 0;
       }
     }
   }
 }