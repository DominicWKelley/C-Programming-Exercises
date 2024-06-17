// Portfolio Courses C Programming Examples #26
// Area of a circle.

#include <stdio.h>

int main()
{
  double radius = 0;
  double area = 0;
  
  printf("Enter your radius: \n");
  scanf("%lf", &radius);
  area = 3.1415 * radius * radius;
  printf("The area is %lf\n", area);

}