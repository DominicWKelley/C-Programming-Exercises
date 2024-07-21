// Portfolio Courses C Programming Examples #66
// Count the letters in a string.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_letters(char *s);

int main(void) {
  char s[] = "A string with some letters 123456789 !@#$%^&*(";

  int result = count_letters(s);

  printf("letter count: %d\n", result);

  return 0;
}

int count_letters(char *s) {
  int length = strlen(s);
  int count = 0;

  for (int i = 0; i < length; i++) {
    if (isalpha(s[i]))
      count++;
  }
  return count;
}
