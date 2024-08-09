// Portfolio Courses C Programming Examples #77
// Delete a specific line from a file.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME_SIZE 1024
#define MAX_LINE 2048

int main(void) {
  FILE *file, *temp;
  char filename[FILENAME_SIZE];
  char temp_filename[FILENAME_SIZE];
  char buffer[MAX_LINE];
  int delete_line = 0;

  printf("File: ");
  scanf("%s", filename);

  // file.tmp
  // temp____file.txt

  strcpy(temp_filename, "temp____");
  strcat(temp_filename, filename);

  printf("Delete Line: ");
  scanf("%d", &delete_line);

  file = fopen(filename, "r");
  temp = fopen(temp_filename, "w");

  if (file == NULL || temp == NULL) {
    printf("Error opening files(s)\n");
    return 1;
  }

  bool keep_reading = true;
  int current_line = 1;

  do {
    fgets(buffer, MAX_LINE, file);

    if (feof(file))
      keep_reading = false;
    else if (current_line != delete_line)
      fputs(buffer, temp);

    current_line++;

  } while (keep_reading);

  fclose(file);
  fclose(temp);

  remove(filename);
  rename(temp_filename, filename);

  return 0;
}
