#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_counter(char *string, char *word);

int main(void)
{
    char s1[] = "It is in this string once.";
    char w1[] = "It";
    int result1 = word_counter(s1, w1);
    printf("Result: %d\n", result1);

    char s2[] = "It is in this string once.";
    char w2[] = "is"; // shows up twice.
    int result2 = word_counter(s2, w2);
    printf("Result: %d\n", result2);

    char s3[] = "Does this work with a long ending?";
    char w3[] = "ending";
    int result3 = word_counter(s3, w3);
    printf("Result: %d\n", result3);

    return 0;
}

int word_counter(char *string, char *word)
{
    int slen = strlen(string);
    int wlen = strlen(word);
    int end = slen - wlen + 1;
    int count = 0;

    for (int i = 0; i < end; i++)
    {
        bool word_found = true;
        for (int j = 0; j < wlen; j++)
        {
            if (word[j] != string[i + j])
            {
                word_found = false;
                break;
            }
        }
        if (word_found)
        {
            count++;
        }
    }
    return count;    
}