#include <stdio.h>

int main() {

  // Get array size
  int size;
  printf("Enter Array size :\n");
  scanf("%d", &size);

  // Create array
  int data[size]; // Array size

  // import elements into array with user input
  for (int i = 0; i < 4; i++) {
    printf("Enter elements for array");
    scanf("%d", &data[i]);
  }
  printf("%d \n",&data);
}