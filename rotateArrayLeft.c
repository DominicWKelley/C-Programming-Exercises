// Portfolio Courses C Programming Examples #30
// Rotate an array left.

#include <stdio.h>

// before
//
// index:  0  1  2  3  4  5
// array:  3  9  8  1  7  6
//
// after
//
// index:  0  1  2  3  4  5
// array:  9  8  1  7  6  3

void rotate_left_once(int array[], int length);
void rotate_left(int array[], int length, int n);

int main(void) {
  int a1[] = {1, 2, 3, 4, 5, 6};

  for (int i = 0; i < 6; i++) {
    printf("a1 before: %d\n", a1[i]);
  }

  rotate_left(a1, 6, 3);

  for (int i = 0; i < 6; i++) {
    printf("a1 after: %d\n", a1[i]);
  }

  return 0;
}

void rotate_left_once(int array[], int length) {
  int temp = array[0];
  for (int i = 0; i < (length - 1); i++) {
    array[i] = array[i + 1];
  }
  array[length - 1] = temp;
}

void rotate_left(int array[], int length, int n) {
  for (int i = 0; i < n; i++) {
    rotate_left_once(array, length);
  }
}
