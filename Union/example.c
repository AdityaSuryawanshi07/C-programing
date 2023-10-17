#include <stdio.h>

// Declaration of Union
union un {
  int data1;
  char data2;
  float data3;
};

int main() {

  // Defining of union object
  union un var1;

  // Initializing union member
  var1.data1 = 1;
  var1.data2 = 'A';
  var1.data3 = 23.21f;

  printf("The value stored in Data1 :%d \n", var1.data1);
  printf("The value stored in Data2 :%c \n", var1.data2);
  printf("The value stored in Data3 :%f \n", var1.data3);

  return 0;
}
