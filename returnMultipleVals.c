// Portfolio Courses C Programming Examples #82
// How to "return" more than one value from a function.

#include <stdio.h>

int area(int length, int width);

int main(void) {
  int result = area(10, 5);

  printf("area: %d\n", result);

  return 0;
}

int area(int length, int width) { return length * width; }
