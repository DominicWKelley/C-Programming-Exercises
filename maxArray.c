// Portfolio Courses C Programming Examples #2
// Find the maximum number in an array.

#include <stdio.h>

int main(void) {
  int myArray[] = {8, 6, 5, 2, 4, 9, 0, 5, 7};
  int max = myArray[0];

  for (int i = 0; i < 9; i++) {
    if (myArray[i] > max)
      max = myArray[i];
  }

  printf("max: %d\n", max);

  return 0;
}
