// Portfolio Courses C Programming Examples #62
// Make all string letters lowercase.

#include <stdio.h>

void fizz_buzz(int n);

int main(void) {

  fizz_buzz(20);

  return 0;
}

void fizz_buzz(int n) {
  for (int i = 1; i < n; i++) {
    if ((i % 3 == 0) && (i % 5 == 0))
      printf("Fizz Buzz\n");
    else if (i % 3 == 0)
      printf("Fizz\n");
    else if (i % 5 == 0)
      printf("Buzz\n");
    else
      printf("%d\n", i);
  }
}
