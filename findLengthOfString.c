// Portfolio Courses C Programming Examples #34
// Manually find the length of a string.

#include <stdio.h>
#include <string.h>

int string_length(char *string);

int main(void) {
  char *s1 = "This is the way.";
  int length = strlen(s1);
  printf("length: %d\n", length);

  int our_length = string_length(s1);
  printf("our length: %d\n", our_length);

  return 0;
}

int string_length(char *string) {
  int length = 0;
  while (string[length] != '\0')
    length++;
  return length;
}
