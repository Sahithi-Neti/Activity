//Write a program to find the sum of n different numbers using 4 functions

#include <stdio.h>

int *numbers(int n)
{
    static int num[500];
    printf("Enter %d Numbers:\n",n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    
    return num;
}

int compute(int n, int num[])
{
    int x,sum;
    x=0;
    sum=0;
    
    while(x<n)
    {
        sum = sum+num[x];
        x++;
    }
    return sum;
}

int display(int sum)
{
    printf("The sum of given numbers is %d\n",sum);
    return 0;
}


int main()
{
    int n,sum;
    int *x;
    printf("Enter total count of numbers(n)\n");
    scanf("%d",&n);
    x = numbers(n);
    sum = compute(n,x);
    display(sum);
    
} 
