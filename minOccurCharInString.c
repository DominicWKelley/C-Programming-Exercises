// Portfolio Courses C Programming Examples #54
// Find the minimum occuring character in a string.

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void print_min_char(char *s);

int main(void) {
  char s[] = "abcdefghabcdefghabcdefg";

  print_min_char(s);

  return 0;
}

void print_min_char(char *s) {
  int length = strlen(s);
  char unique[length];
  int counted = 0;
  int min_count = 0;
  char min_char = 0;

  for (int i = 0; i < length; i++) {
    bool already_counted = false;
    for (int j = 0; j < counted; j++) {
      if (s[i] == unique[j])
        already_counted = true;
    }
    if (already_counted)
      continue;

    int count = 0;
    for (int j = 0; j < length; j++) {
      if (s[i] == s[j])
        count++;
    }
    unique[counted] = s[i];
    counted++;
    if (counted == 1) {
      min_count = count;
      min_char = s[i];
    } else if (count < min_count) {
      min_count = count;
      min_char = s[i];
    }
  }
  if (length > 0)
    printf("%c:%d\n", min_char, min_count);
  else
    printf("Error: String empty!\n");
}
