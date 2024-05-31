#include <stdio.h>
#include <stdbool.h>

// if (year is not divisible by 4)
//  it is a common year
// else if (year is not divisible by 100)
//  it is a leap year
// else if (year is not divisible by 400)
//  it is a common year
// else 
//  it is a leap year 

bool is_leap_year(int year);

int main(void)
{
    int year = 0;
    printf("Enter a year:\n");
    scanf("%d", &year);


    if (is_leap_year(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);


    return 0;
}

bool is_leap_year(int year)
{
    if (year % 4 != 0) return false;
    else if (year % 100 != 0) return true;
    else if (year % 400 != 0) return false;
    else return true;

}