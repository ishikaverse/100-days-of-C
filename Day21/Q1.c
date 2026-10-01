//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = 0;
    int temp = n;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    power = 1;
    for (int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    first = n / power;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}