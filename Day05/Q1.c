//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main(){
    
    int p , r , t , s , c;
    printf("enter the principal amount : ");
    scanf("%d" , &p);
    
    printf("enter the rate of interest : ");
    scanf("%d" , &r);

    printf("enter the time : ");
    scanf("%d" , &t);

   s = (p*r*t)/100;
   c = p*((1+r/100),t)-p;
    
   printf("simple interest : %d\n" ,s);
   printf("compund interest : %d\n" , c);

   return 0;


}