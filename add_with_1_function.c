//Write a program to add two user input numbers using one function.
#include<stdio.h>

int main()
{
  int a,b,c;
  printf("Enter Number: \n");
  scanf("%d",&a);
  printf("Enter Number: \n");
  scanf("%d",&b);
  c = a+b;
  printf("Sum of %d and %d is %d",a,b,c);
  return 0;
}
