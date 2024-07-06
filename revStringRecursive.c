// Portfolio Courses C Programming Examples #49
// Use recursion to print string in reverse.

#include <stdio.h>

void print_reverse(char *s);

int main(void)
{
    char s[] = "This is the way.";
    print_reverse(s);
    printf("\n");
    return 0;
}

void print_reverse(char *s)
{
    if (*s != '\0')
    {
        print_reverse(s + 1);
        printf("%c", *s);
    }
}
