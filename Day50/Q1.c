//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4)
        printf("%02d-Apr-%04d", dd, yyyy);
    else
        printf("Month is not April");

    return 0;
}