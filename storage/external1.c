#include<stdio.h>

extern int globalVariable;

int main(){
  printf("external Variable: %d \n",globalVariable);
  return 0;
}