//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main(){

   int n , sum;
   printf("Enter a natural number :");
   scanf("%d" , &n);

   sum = (n * (n + 1))/2;
   printf("the sum of first n natural number is %d" , sum);

   return 0;

}