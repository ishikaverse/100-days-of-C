//Write a program to swap two numbers using a third variable.
int main(){

  int a , b , c;
  printf("Enter first number :");
  scanf("%d" , &a);

  printf("Enter second number :");
  scanf("%d" , &b);

  a = b;
  b = c;
  c = a;

  printf("Swapped first value : %d\n" , a);
  printf("Swapped second value : %d\n" , b);

  return 0;

}