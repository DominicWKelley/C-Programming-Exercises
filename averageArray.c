// Portfolio Courses C Programming Examples #7
// Compute the average of an array.

#include <stdio.h>

double avg(double array[], int length);

int main(void)
{
    double arr1[] = {5.2,9.3, 6.5, 4.1,7.8};
    double arr2[] = {9.7};
    double arr3[] = {6.6,6.8};
    double arr4[] = {100,-100,50,-50,2,-2};

    printf("arr1 avg: %.2lf\n", avg(arr1, 5));
    printf("arr2 avg: %.2lf\n", avg(arr2, 1));
    printf("arr3 avg: %.2lf\n", avg(arr3, 2));
    printf("arr4 avg: %.2lf\n", avg(arr4, 6));
    
    return 0;
}

double avg(double array[], int length)
{
    double sum = 0;
    double average = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    
    return sum / length;;
}