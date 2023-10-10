#include<stdio.h>

int main(){

printf("Enter Number: \n");
  int months;
  scanf("%d",&months);

  switch(months){
    case 1:printf("Month 1: January\n");
    break;
    case 2:printf("Month 2: February\n");
    break;
    case 3:printf("Month 3: March\n");
    break;
    case 4:printf("Month 4: April\n");
    break;
    case 5:printf("Month 5: May\n");
    break;
    case 6:printf("Month 6: June\n");
    break;
    case 7:printf("Month 7: Julyn\n");
    break;
    case 8:printf("Month 8: August\n");
    break;
    case 9:printf("Month 9: September\n");
    break;
    case 10:printf("Month 10: Octomber\n");
    break;
    case 11:printf("Month 11: November\n");
    break;
    case 12:printf("Month 12: December\n");
    break;
    default:printf("Enter only 1 to 12 \n");
  }
  
}