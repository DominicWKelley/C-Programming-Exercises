// Portfolio Courses C Programming Examples #40
// Reverse the words in a string.

#include <stdio.h>
#include <string.h>

void reverse_words(char *s);

int main(void) {
  char s[] = "This is the way.";

  printf("before: %s\n", s);

  reverse_words(s);

  printf("after: %s\n", s);

  return 0;
}

void reverse_words(char *s) {
  int len = strlen(s);
  int i = 0, j = 0;
  char temp[100];

  for (i = 0; i < len; i++) {
    for (j = 0; i < len; j++, i++) {
      if (s[i] == ' ' || s[i] == '.')
        break;
      temp[j] = s[i];
    }
    while (j > 0) {
      j--;
      s[i - j - 1] = temp[j];
    }
  }
}
