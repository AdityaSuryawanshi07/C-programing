#include<stdio.h>

int main(){

int num;
printf("Enter Number :\n");
scanf("%d",&num);

  for(int i=10; i>=1 ;i--){
   
    printf("%d\n",i*num);
  }
  return 0;
}