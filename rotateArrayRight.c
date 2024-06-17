// Portfolio Courses C Programming Examples #31
// Rotate an array right.

#include <stdio.h>

// before
//
// index:  0  1  2  3  4  5
// array:  3  9  8  1  7  6
//
// index:  0  1  2  3  4  5
// array:  6  3  9  8  1  7
//

void rotate_right_once(int array[], int length);
void rotate_right(int array[], int length, int n);

int main(void)
{
    int a1[] = {1,2,3,4,5,6};

    for (int i = 0; i < 6; i++)
    {
        printf("a1 before: %d\n", a1[i]);
    }

    rotate_right(a1, 6, 2);

    for (int i = 0; i < 6; i++)
    {
        printf("a1 after: %d\n", a1[i]);
    }

    return 0;
}

void rotate_right_once(int array[], int length)
{
    int temp = array[length - 1];
    for (int i = (length - 1); i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = temp;
}

void rotate_right(int array[], int length, int n)
{
    for (int i = 0; i < n; i++)
    {
        rotate_right_once(array, length);
    }
}