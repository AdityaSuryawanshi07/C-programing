#include <stdio.h>

int main() {

  int num1, num2, num3, num4;

  printf("Enter Number 1: \n");
  scanf("%d", &num1);

  printf("Enter Number 2: \n");
  scanf("%d", &num2);

  printf("Enter Number 3: \n");
  scanf("%d", &num3);

  printf("Enter Number 4: \n");
  scanf("%d", &num4);

  if (num1 < num2 && num1 < num3 && num1 < num4) {
    printf("Number 1 is smaller... \n");
  } else {
    if (num2 < num1 && num2 < num3 && num2 < num4) {
      printf("Number 2 is smaller....\n");
    } else {
      if (num3 < num1 && num3 < num2 && num3 < num4) {
        printf("Number 3 is smaller...\n");
      } else {
        printf("Number 4 is smaller...\n");

        return 0;
      }
    }
  }
}