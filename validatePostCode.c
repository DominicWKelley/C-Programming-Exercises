// Portfolio Courses C Programming Examples #25
// String format validation.

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_postal_code(char postal_code[]);

int main(void) {
  char code1[] = "L8K 4B6";
  char code2[] = "93245";

  if (is_postal_code(code1))
    printf("%s is a postal code\n", code1);
  else
    printf("%s is not a postal code\n", code1);

  if (is_postal_code(code2))
    printf("%s is a postal code\n", code2);
  else
    printf("%s is not a postal code\n", code2);

  return 0;
}

bool is_postal_code(char postal_code[]) {
  if (strlen(postal_code) != 7)
    return false;
  if (!isalpha(postal_code[0]))
    return false;
  if (!isdigit(postal_code[1]))
    return false;
  if (!isalpha(postal_code[2]))
    return false;
  if (postal_code[3] != ' ')
    return false;
  if (!isdigit(postal_code[4]))
    return false;
  if (!isalpha(postal_code[5]))
    return false;
  if (!isdigit(postal_code[6]))
    return false;
  return true;
}
