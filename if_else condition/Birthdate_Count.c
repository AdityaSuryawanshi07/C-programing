#include<stdio.h>

int main(){

  int yearStart , yearEnd;
  int startMonth , endMonth;
  int startDate , endDate;

  printf("Enter Your Birth Year:\n");
  scanf("%d",&yearStart);

  //  printf("Enter Your Birth Month:\n");
  // scanf("%d",&startMonth);
  
  // printf("Enter Birth date: \n");
  // scanf("%d",&startDate);

   printf("Enter Current Year:\n");
   scanf("%d",&yearEnd);

  //  printf("Enter Current  Month:\n");
  // scanf("%d",&endMonth);
  
  // printf("Enter Current date: \n");
  // scanf("%d",&endDate);

  int age= yearEnd - yearStart;

  if(yearStart < yearEnd){
    printf("Years"+age);
  }else{
      printf("DAte");
  }
  
}