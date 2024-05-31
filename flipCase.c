#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letter_flip(char *s);

int main(void)
{
    char s1[] = "abcdeABCDE";
    letter_flip(s1);
    printf("s1 after: %s\n", s1);

    char s2[] = "This iS My StRiNg!";
    letter_flip(s2);
    printf("s2 after: %s\n", s2);

    return 0;
}

void letter_flip(char *s)
{
    int length = strlen(s);

    for(int i = 0; i < length; i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        else if (islower(s[i]))
            s[i] = toupper(s[i]);
    }
}