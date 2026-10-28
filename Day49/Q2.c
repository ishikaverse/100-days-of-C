//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, last;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    last = strlen(name) - 1;

    for (i = 0; name[i] != '\0'; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            if (i != 0)
                printf(".");

            if (i == 0 || i < last)
                printf("%c", name[i]);
        }
    }

    printf("\n");

    return 0;
}