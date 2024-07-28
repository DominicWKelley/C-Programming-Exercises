// Portfolio Courses C Programming Examples #68
// Read a file and display its contents.

#include <stdio.h>

int main(void) {
  FILE *fh;

  fh = fopen("file.txt", "r");

  if (fh != NULL) {
    char c;
    while ((c = fgetc(fh)) != EOF) {
      putchar(c);
    }
    fclose(fh);
  } else
    printf("Error opening file.\n");

  return 0;
}
