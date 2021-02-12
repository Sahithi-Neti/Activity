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

int display(int n, int sum, int num[])
{
   printf("Numbers Entered:\n");
   for(int i=0; i<n; i++)
   {
      printf("%d\n",num[i]);
    }
    printf("Therefore, the sum is %d\n",sum);
    return 0;
}

int count()
{
   int n;
   printf("Enter total count of numbers(n)\n");
   scanf("%d",&n);
   return n;
}
int main()
{
    int n,sum;
    int *x;
    n = count();
    x = numbers(n);
    sum = compute(n,x);
    display(n,sum,x);
     return 0;
}
