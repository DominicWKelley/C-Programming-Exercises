// Portfolio Courses C Programming Examples #32
// Merge two sorted arrays.

#include <stdio.h>

void merge(int arr1[], int length1, int arr2[], int length2, int r[]);

int main(void)
{
    int a1[] = {1,3,5,7,9};
    int a2[] = {2,4,5,6,8};

    int r[10];

    merge(a1, 5, a2, 5, r);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", r[i]);
    }

    return 0;
}

void merge(int arr1[], int length1, int arr2[], int length2, int r[])
{
    int i = 0, j = 0, k = 0;

    while (i < length1 && j < length2)
    {
        if (arr1[i] < arr2[j])
        {
            r[k] = arr1[i];
            i++;
            k++;
        } else
        {
            r[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < length1)
    {
        r[k] = arr1[i];
        i++;
        k++;
    }
    while (j < length2)
    {
        r[k] = arr2[j];
        j++;
        k++;
    }


}