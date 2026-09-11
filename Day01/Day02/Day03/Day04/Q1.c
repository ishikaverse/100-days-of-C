//Write a program to swap two numbers without using a third variable.
int main(){

   int a , b;
   printf("Enter first number :");
   scanf("%d" , &a);

   printf("Enter second mumber :");
   scanf("%d" , &b);

    a = a + b;
    b = a - b;
    a = a - b;


   printf("enter swapped value : %d\n" , a);
   printf("enter swapped value : %d\n" , b);


  return 0;

}