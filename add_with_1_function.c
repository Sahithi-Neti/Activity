//Write a program to add two user input numbers using one function.
#include<stdio.h>

int add(int a, int b);
int main()
{
  int a,b,c;
  printf("Enter Number: \n");
  printf("Enter Number: \n");
  scanf("%d",&a);
  scanf("%d",&b);
  add(a,b);
  printf("Sum of %d and %d is %d",a,b,c);
}

int add(int a, int b)
{
  int c;
  c = a+b;
  return c;
}
