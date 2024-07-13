// Portfolio Courses C Programming Examples #9
// Computing the Fibonacci Sequence.

#include <stdio.h>

/*0,1,1,2,3,5,8, etc.*/

int fib(int n);

int main(void) {
  int A = 0;
  int B = 1;
  int temp = 0;
  int length = 0;

  do {
    printf("Enter sequence length.");
    scanf("%d", &length);
    if (length < 3) {
      printf("Length must be >= 3\n");
    }
  } while (length < 3);

  printf("\nIterative solution\n");
  printf("%d\n%d\n", A, B);
  for (int i = 2; i < length; i++) {
    temp = A + B;
    printf("%d\n", temp);
    A = B;
    B = temp;
  }

  printf("\nRecursive Solution\n");
  for (int i = 0; i < length; i++) {
    printf("%d", fib(i));
    printf("\n");
  }

  return 0;
}

int fib(int n) {
  if (n > 1)
    return fib(n - 1) + fib(n - 2);
  else if (n == 1)
    return 1;
  else if (n == 0)
    return 0;
  else {
    printf("\nError: n must be >= 0\n");
    return -1;
  }
}
