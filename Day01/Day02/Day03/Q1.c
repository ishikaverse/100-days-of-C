//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main(){

    float t; //temperature in celsius : t
    printf("Enter temperature in celsius : ");
    scanf("%f" , &t);
    printf("Temperature in farenheit : %.2f" , (t * 9/5) + 32);

    return 0;
}