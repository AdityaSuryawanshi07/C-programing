#include<stdio.h>
#include<stdlib.h>

int main(){

  // File pointer
  FILE* fptr;

  //creating file using fopen() access mode "w"
  fptr = fopen("aditya.txt","w");
  
  // checking if the file is created
  if(fptr == NULL){
    printf("The file is not opened , Program woll exit now");
  }else{
  printf("The file is created successfully");  
  }
return 0;
}



