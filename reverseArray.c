// Portfolio Courses C Programming Examples #4
// Reverse an array.

#include <stdio.h>

int main(void)
{
    int myArray[] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;
    int temp = 0;

    for (int i = 0; i < (length / 2); i++)
    {
        temp = myArray[i];
        myArray[i] = myArray[length - i - 1];
        myArray[length - i - 1] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        printf("myArray[%d] = %d\n", i, myArray[i]);
    }

    return 0;
}