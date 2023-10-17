#include<stdio.h>

int function(){

  auto int num=10;
  printf("Auto variable: %d \n",num);
 
  return 0;
}

int main(){
  function();
  function();
}
