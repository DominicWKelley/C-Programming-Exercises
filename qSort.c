// Portfolio Courses C Programming Examples #75
// Using qsort to sort an array.

#include <stdio.h>
#include <stdlib.h>

int compare(const void *x_void, const void *y_void) {
  int x = *(int *)x_void;
  int y = *(int *)y_void;
  return x - y;
}

int main(void) {
  int a[] = {8, 7, 2, 4, 6, 3, 5, 1, 9, 0};
  int length = 10;

  qsort(a, length, sizeof(int), compare);

  for (int i = 0; i < length; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }

  return 0;
}

// We need to provide qSort a special function...
//
// int comparator(const void *x, const void *y);
//
// return value of the function will effect the sorting order
//
// < 0 if x should go before y
//  0  if x is equal to y
// > 0 if x should go after y
//
// and in the above breakdown, by 'x' and 'y' we *really* mean
// the values pointed to by x and y as x and y are pointers
// in the above function!
//
