//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50], longest[50];
    int i, j, max = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';
            len = strlen(word);

            if (len > max)
            {
                max = len;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
    }

    printf("Longest word: %s", longest);

    return 0;
}