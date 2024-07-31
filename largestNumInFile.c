// Portfolio Courses C Programming Examples #70
// Find the largest number in a file.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define BSIZE 1024

int main(void) {
  FILE *fh;
  char buffer[BSIZE];
  double current, max;
  int numbers = 0;

  fh = fopen("max.txt", "r");

  if (fh == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  while (fgets(buffer, BSIZE, fh) != NULL) {
    current = atof(buffer);

    if (numbers == 0)
      max = current;
    else if (current > max)
      max = current;

    numbers++;
  }

  fclose(fh);

  printf("max: %.2f\n", max);

  return 0;
}
