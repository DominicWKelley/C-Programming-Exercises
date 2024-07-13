// Portfolio Courses C Programming Examples #10
// Counting values in a string.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int vowel_count(char *s);

int main(void) {
  char s1[] = "It's a wonderful life!";
  char s2[] = "Luke I am your father.";
  char s3[] = "AaEeIiOoUu";

  int s1count = vowel_count(s1);
  int s2count = vowel_count(s2);
  int s3count = vowel_count(s3);

  printf("Vowel count: %d\n", s1count);
  printf("Vowel count: %d\n", s2count);
  printf("Vowel count: %d\n", s3count);

  return 0;
}

int vowel_count(char *s) {
  int count = 0;

  for (int i = 0; i < strlen(s); i++) {
    switch (toupper(s[i])) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      count++;
    }
  }
  return count;
}
