// Portfolio Courses C Programming Examples #47
// Count the punctuation marks in a string.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count__punct(char *s);

int main(void) {
  char s[] = "apople, pear, orange; something...";
  int total = count__punct(s);
  printf("total: %d\n", total);

  return 0;
}

int count__punct(char *s) {
  int len = strlen(s);
  int count = 0;
  for (int i = 0; i < len; i++)
    if (ispunct(s[i]))
      count++;
  return count;
}
