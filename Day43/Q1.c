//Reverse a string

#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j, len = 0;

    scanf("%99s", str);

    while(str[len] != '\0') {
        len++;
    }

    i = 0;
    j = len - 1;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("%s", str);

    return 0;
}
