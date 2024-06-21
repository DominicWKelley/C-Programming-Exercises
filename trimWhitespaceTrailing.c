// Portfolio Courses C Programming Examples #39
// Trim Trailing Whitespace String Characters.

#include <stdio.h>
#include <string.h>

void trim(char *s);

int main(void)
{
    char s[] = "This is the way. \n\n\t  ";

    printf("before: \n%s\n", s);

    trim(s);

    printf("after: \n%s\n", s);

    return 0;
}

void trim(char *s)
{
    int i = strlen(s) - 1;

    while (i > 0)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') i--;
        else break;
    }
    s[i + 1] = '\0';
}