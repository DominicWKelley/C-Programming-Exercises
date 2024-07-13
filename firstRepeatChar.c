// Portfolio Courses C Programming Examples #5
// Print first character in a string.

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void print_first_repeat(char *s);

int main(void) {
  char s[] = "abcdefghijklmnopjklmnop";

  print_first_repeat(s);

  return 0;
}
void print_first_repeat(char *s) {
  int length = strlen(s);
  bool found_repeat = false;

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      if (s[i] == s[j] && i != j) {
        found_repeat = true;
      }
    }
    if (found_repeat) {
      printf("%c\n", s[i]);
      break;
    }
  }
  if (!found_repeat) {
    printf("No repeating character found.\n");
  }
}
