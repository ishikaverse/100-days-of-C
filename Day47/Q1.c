//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int i, count[256] = {0};

    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    if (strlen(s1) != strlen(s2))
    {
        printf("Not Anagrams");
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++)
    {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}