#include <stdio.h>

int main(){

  int marks;
  
printf("Enter Your Marks : \n");
scanf("%d",&marks);

  if(marks>=90 && marks <=100){
    printf("Your Garde : A\n");
  }else if(marks>=80 && marks <=90){
    printf("Your Grade: B\n");
      }else if(marks>=70 && marks <=80){
    printf("Your Gade: C\n");
  }else if(marks>=60 && marks <=70){
    printf("Your Gade: D\n");
  }else{
    printf("Your Grade : F\n"); 
   }
  }





// Write a program to find Grade ?

// Example : Grading System 
// 80 - 100 = Grade A
// 60 - 80 = Grade B
// 40 - 60 = Grade C
// 30 - 40 = Grade D
// 0  - 30 Grade F
