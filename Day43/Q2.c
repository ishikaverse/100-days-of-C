//Check if a string is a palindrome

#include <stdio.h>

int main() {
    char str[100];
    int i, j, len = 0, flag = 1;

    scanf("%99s", str);

    while(str[len] != '\0') {
        len++;
    }

    i = 0;
    j = len - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
