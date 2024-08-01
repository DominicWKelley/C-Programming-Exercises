// Portfolio Courses C Programming Examples #72
// Lottery number generator.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  int number;
  int numbers[6];
  bool unique;

  for (int i = 0; i < 6; i++) {
    do {
      number = (rand() % 59) + 1;
      unique = true;
      for (int j = 0; j < i; j++) {
        if (numbers[j] == number) {
          unique = false;
        }
      }
    } while (!unique);
    numbers[i] = number;

    printf("number %d: %d\n", i + 1, number);
  }

  return 0;
}
