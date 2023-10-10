#include<stdio.h>

int main(){

printf("Enter Number : \n");
int week;
scanf("%d",&week);

  switch(week){
    case 1:
      printf("Day 1: Monday. \n");
    break;
    case 2:
      printf("Day 2: Tuesday. \n");
    break;
    case 3:
      printf("Day 3: Wednesday. \n");
    break;
    case 4:
      printf("Day 4: Thursday. \n");
    break;
    case 5:
      printf("Day 5: Friday. \n");
    break;
    case 6:
      printf("Day 6: Saturday. \n");
    break;
    case 7:
      printf("Day 7: Sunday. \n");
    default:printf("Enter only 1 to 7; \n");
    return 0;
  }
}