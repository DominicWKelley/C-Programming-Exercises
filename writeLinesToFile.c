// Portfolio Courses C Programming Examples #69
// Write lines to a file.

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(void) {
  char buffer[BUFFER_SIZE];
  bool keep_going = true;
  FILE *fh;

  fh = fopen("output.txt", "w");

  if (fh == NULL) {
    printf("Error opening file");
    return (1);
  }

  while (keep_going) {
    fgets(buffer, BUFFER_SIZE, stdin);

    if (strcmp(buffer, "quit\n") == 0)
      keep_going = false;
    else
      fputs(buffer, fh);
  }

  fclose(fh);

  return 0;
}
