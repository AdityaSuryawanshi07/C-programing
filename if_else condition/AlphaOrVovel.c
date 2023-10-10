#include<stdio.h>

int main(){

  char num;
  
  
 
  printf("Enter Alphabet :\n");
  scanf("%s",&num);

  if(num =='a' || num=='e' ||num=='i' ||num== 'o'||num=='u'){
    printf("Entered number is Vovel\n");
  }else{
    printf("Entered number is Conconent\n");
  }
}