//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
   int y;
   printf("enter the year :");
   scanf("%d" , &y);

   if (y%4 == 0 && y%100 != 0){
      printf("it is a leap year");
   }
   else {
    printf("it is not a leap year");
   }

   return 0;




    
}