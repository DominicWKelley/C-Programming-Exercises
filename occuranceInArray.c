// Portfolio Courses C Programming Examples #3
// Count the occurrences of a value in an array.

#include <stdio.h>

int main(void) {
  int myArray[] = {4, 7, 9, 6, 5, 3, 2, 8, 3, 2, 1, 5};

  int count = 0;
  int toFind = 5;

  for (int i = 0; i < 12; i++) {
    if (myArray[i] == toFind)
      count++;
  }

  printf("Number of %ds found is %d\n", toFind, count);

  return 0;
}
