//WAP to find the sum of two fractions.

#include<stdio.h>

struct frac{
    int n,d;
}f,p,r;


int value()
{
    printf("First fraction\n");
    printf("Numerator-Value:\t");
    scanf("%d",&f.n);
    printf("Denominator-Value:\t ");
    scanf("%d",&f.d);
    printf("Second fraction\n");
    printf("Numerator-Value:\t");
    scanf("%d",&p.n);
    printf("Denominator-Value\t");
    scanf("%d",&p.d);
    return 0;
}

void compute()
{
    int d;
    float s1,s2,sum;
    r.n = (f.n*p.d)+(p.n*f.d);
    r.d = f.d*p.d;
    for(int i=1; i<=r.n && i<=r.d; i++)
    {
        if(r.n%i==0 && r.d%i==0)
        d=i;
    }
    r.n = r.n/d;
    r.d = r.d/d;

}


void display()
{
    printf("SUM:\n %d/%d + %d/%d = %d/%d\n",f.n,f.d,p.n,p.d,r.n,r.d);
}


int main()
{
    float sum;
    value();
    compute();
    display();
    return 0;
}
