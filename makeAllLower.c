// Portfolio Courses C Programming Examples #61
// Make all string letters lowercase.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void make_lower(char *s);

int main(void) {
  char s[] = "Some String With LOTS Of Capitals.";

  make_lower(s);
  printf("%s\n", s);

  return 0;
}

void make_lower(char *s) {
  int length = strlen(s);
  for (int i = 0; i < length; i++) {
    s[i] = tolower(s[i]);
  }
}
