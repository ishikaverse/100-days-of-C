
//Write a program to input a number (1-7) and display the corresponding day of the week using switch case.


#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
          break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid day number");
    }

    return 0;
}