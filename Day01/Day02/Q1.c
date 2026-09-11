//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main (){

   int l , b , area , perimeter;
   printf("Enter length of rectangle :");
   scanf("%d" , &l);

   printf("Enter breadth of rectangle :");
   scanf("%d" , &b);
    
   area =  l * b;
   perimeter = 2 * (l + b);

   printf("Area of rectangle : %d\n" , area);
   printf("perimeter of rectange : %d\n" , perimeter);

   return 0;

}