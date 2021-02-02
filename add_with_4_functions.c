//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>

int add(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

int input()
{
    int a;
    printf("Enter number:\n");
    scanf("%d",&a);
    return a;
}

int display(int x, int y, int z)
{
    printf("The sum of %d and %d is %d",x,y,z);
    return 0;
}

int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum= add(a,b);
    display(a,b,sum);
    return 0;
}
