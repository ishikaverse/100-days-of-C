//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){

   int t , h , m , s;
   printf("enter time in seconds : ");
   scanf("%d" , &t);
   h = t/3600;
   m = ((t%3600)/60);
   s = t%60;
   printf("%d hours %d minutes %d seconds" , h,m,s);
   return 0;


}