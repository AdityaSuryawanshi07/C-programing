#include <stdio.h>

int main() {

  int num1;
  int num2;
  int num3;

  printf("Enter number 1: \n");
  scanf("%d", &num1);

  printf("Enter number 2: \n");
  scanf("%d", &num2);

  printf("Enter number 3: \n");
  scanf("%d", &num3);

  if (num1 > num2 && num1 > num3) {
    printf("Largest Number is : %d \n", num1);
  } else {
    if (num2 > num1 && num2 > num3) {
      printf("Largest Number is : %d\n", num2);
    } else {
      if (num3 > num1 && num3 > num2) {
        printf("Largest Number is : %d\n", num3);

        return 0;
      }
    }
  }
}