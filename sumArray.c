// Portfolio Courses C Programming Examples #6
// Sum the values in an array.

#include <stdio.h>

int sum(int array[], int length);

int main(void) {
  int myArray1[] = {1, 3, 7, 5, 9, 5, 6, 7};
  int length1 = 8;
  int total1 = sum(myArray1, length1);
  printf("%d\n", total1);

  int myArray2[] = {6};
  int length2 = 1;
  int total2 = sum(myArray2, length2);
  printf("%d\n", total2);

  int myArray3[] = {99, 99};
  int length3 = 2;
  int total3 = sum(myArray3, length3);
  printf("%d\n", total3);

  return 0;
}

int sum(int array[], int length) {
  int sumValue = 0;

  for (int i = 0; i < length; i++) {
    sumValue += array[i];
  }
  return sumValue;
}
