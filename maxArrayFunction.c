// Portfolio Courses C Programming Examples #2
// Find the maximum number in an array (functional version).

#include <stdio.h>

int find_max(int array[], int length);

int main(void)
{
    int myArray1[] = {8,6,5,2,4,9,0,5,7};
    int myArray2[] = {5,6,2,1,0};
 
    int max1 = find_max(myArray1, 9);
    int max2 = find_max(myArray2, 5);

    printf("max1: %d\n", max1);
    printf("max2: %d\n", max2);

    return 0;
}

int find_max(int array[], int length)
{
    int max = array[0];

    for (int i = 1; i < length; i++)
    {
        if (array[i] > max) max = array[i];
    }

    return max;
}