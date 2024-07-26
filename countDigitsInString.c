// Portfolio Courses C Programming Examples #67
// Count the digits in a string.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_digits(char *s);

int main(void) {
  char s[] = "A string with some letters 123456789 !@#$%^&*(";

  int result = count_digits(s);

  printf("digit count: %d\n", result);

  return 0;
}

int count_digits(char *s) {
  int length = strlen(s);
  int count = 0;

  for (int i = 0; i < length; i++) {
    if (isdigit(s[i]))
      count++;
  }
  return count;
}
