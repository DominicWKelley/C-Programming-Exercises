// Portfolio Courses C Programming Examples #81
// Coding trick to initialize an array with include directize and external file.

#include <stdio.h>

int main(void) {
  int a[2][5] = {
#include "data.txt"
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    }
  }

  return 0;
}
