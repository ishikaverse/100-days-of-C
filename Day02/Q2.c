//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main (){

    int r;
    printf("Enter the radius : ");
    scanf("%d" , &r);

    printf(" area of circle : %.2f\n" , 3.14 * r * r);
    printf("circumference of circle : %.2f\n" , 2 * 3.14 * r);

    return 0;

}