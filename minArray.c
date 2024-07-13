// Portfolio Courses C Programming Examples #1
// Find the minimum number in an array.

#include <stdio.h>

int main(void) {
  int myArray[] = {5, 2, 7, 8, 6, 1, 2, 9, 6};
  int min = myArray[0];

  for (int i = 0; i < 9; i++) {
    if (myArray[i] < min)
      min = myArray[i];
  }

  printf("Minumum: %d\n", min);
}
