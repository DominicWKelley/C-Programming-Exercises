// Portfolio Courses C Programming Examples #5
// Check if string is a palindrome.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char string[]);

int main(void)
{
    char string1[] = "not a palindrome!";
    char string2[] = "abcdcba";
    char string3[] = "abccba";

    if (isPalindrome(string1))
        {printf("%s\n- is a palindrome.\n", string1);}
    else
        {printf("%s\n- is not a palindrome.\n", string1);}

    if (isPalindrome(string2))
        {printf("%s\n- is a palindrome.\n", string2);}
    else
        {printf("%s\n- is not a palindrome.\n", string2);}

    if (isPalindrome(string3))
        {printf("%s\n- is a palindrome.\n", string3);}
    else
        {printf("%s\n- is not a palindrome.\n", string3);}

    return 0; 
}

bool isPalindrome(char string[])
{
    int middle = strlen(string) / 2;
    int len = strlen(string);

    for (int i = 0; i < middle; i++)
    {
        if (string[i] != string[len - i - 1])
            return false;
    }    
}