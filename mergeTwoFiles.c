// Portfolio Courses C Programming Examples #78
// Merge contents of two files into a third file.

#include <stdio.h>

int main(void) {
  FILE *f1, *f2, *merge;

  f1 = fopen("f1.txt", "r");
  f2 = fopen("f2.txt", "r");
  merge = fopen("m.txt", "w");

  if (f1 == NULL || f2 == NULL || merge == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  char c;
  while ((c = fgetc(f1)) != EOF) {
    fputc(c, merge);
  }
  while ((c = fgetc(f2)) != EOF) {
    fputc(c, merge);
  }

  fclose(merge);
  fclose(f1);
  fclose(f2);

  return 0;
}
