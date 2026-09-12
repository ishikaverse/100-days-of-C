//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int p, q, r;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &p, &q, &r);

    if (p >= q && p >= r) {
        printf("%d is the largest", p);
    }
    else if (q >= a && q >= c) {
        printf("%d is the largest", q);
    }
    else {
        printf("%d is the largest", r);
    }

    return 0;
}
