//WAP to find the sum of n fractions.
#include <stdio.h>

struct fraction{
    int a,n;
    float frac[500];
}f;

int value()
{
    printf("Value:\t");
    scanf("%d",&f.a);
    return f.a;
}


float compute(int n,float frac[])
{
    float sum=0;
    for(int j=0;j<f.n;j++)
    {
        sum = sum+f.frac[j];
    }
    
    return sum;
}

float display(int n,float sum)
{
    printf("The sum of the given %d fractions is:%f\n",f.n,sum);
    return 0.0;
}


int main()
{
    int a,b;
    float c,sum;
    printf("Enter total number of Fractions:");
    scanf("%d",&f.n);
    printf("Enter %d Fractions\n",f.n);
    for(int i=0;i<f.n;i++)
    {
        printf("\nEnter fraction(%d)\n",i+1);
        printf("Numerator-");
        a=value();
        printf("Denominator-");
        b=value();
        c = a/b;
        f.frac[i]=c;
    }
    
    sum = compute(f.n,f.frac);
    display(f.n,sum);
    return 0;
}
