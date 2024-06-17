// Portfolio Courses C Programming Examples #4
// Reverse an array.

#include <stdio.h>

void reverseArray(int array[], int length);

int main(void)
{
    int myArray1[] = {1,2,3,4,5,6,7,8,9,};
    int myArray2[] = {6,5,4,3,2,1};

    int length1 = 9;
    int length2 = 6;

    reverseArray(myArray1, length1);
    reverseArray(myArray2, length2);

    for (int i = 0; i < length1; i++)
    {
        printf("myArray1[%d] = %d\n", i, myArray1[i]);
    }

    printf("\n");

    for (int i = 0; i < length2; i++)  
    {
        printf("myArray2[%d] = %d\n", i, myArray2[i]);
    }

    return 0;
}

void reverseArray(int array[], int length)
{
    int temp = 0;

    for (int i = 0; i < (length / 2); i++)
    {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
    
}
