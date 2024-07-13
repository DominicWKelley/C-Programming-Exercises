// Portfolio Courses C Programming Examples #8
// Convert celsius to fahtenheit by steps

#include <stdio.h>

int main(void) {
  double C = 0;
  double F = 0;
  double start = 0;
  double end = 0;
  double step = 0;

  printf("Enter start C temp: \n");
  scanf("%lf", &start);

  printf("Enter end C temp: \n");
  scanf("%lf", &end);

  printf("Enter step value: \n");
  scanf("%lf", &step);

  for (C = start; C <= end; C += step) {
    F = (C * 1.8) + 32;
    printf("C: %8.2lf -> F %8.2lf\n", C, F);
  }

  return 0;
}
