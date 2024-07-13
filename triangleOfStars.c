// Portfolio Courses C Programming Examples #27
// Output a triangle of stars.

#include <stdio.h>
int main(void) {
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
}
