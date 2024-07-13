// Portfolio Courses C Programming Examples #3
// Count the occurrences of a value in an array.

#include <stdio.h>

int occurances(int array[], int length, int toFind);

int main(void) {
  int myArray1[] = {4, 7, 9, 6, 5, 3, 2, 8, 3, 2, 1, 5};
  int myArray2[] = {6, 3, 9, 3, 5, 3, 2, 12, 3, 2};

  int toFind1 = 2;
  int toFind2 = 3;

  int find1 = occurances(myArray1, 12, toFind1);
  int find2 = occurances(myArray2, 10, toFind2);

  printf("Number of %ds found in Array 1 is %d\n", toFind1, find1);
  printf("Number of %ds found in Array 2 is %d\n", toFind2, find2);

  return 0;
}

int occurances(int array[], int length, int toFind) {
  int count = 0;

  for (int i = 0; i < length; i++) {
    if (array[i] == toFind)
      count++;
  }
  return count;
};
