//WAP to find the sum of two fractions.

#include<stdio.h>

struct frac{
    int n1,n2,d1,d2,num,den;
}f;


int value()
{
    printf("First fraction\n");
    printf("Numerator-Value:\t");
    scanf("%d",&f.n1);
    printf("Denominator-Value:\t ");
    scanf("%d",&f.d1);
    printf("Second fraction\n");
    printf("Numerator-Value:\t");
    scanf("%d",&f.n2);
    printf("Denominator-Value\t");
    scanf("%d",&f.d2);
    return 0;
}

float compute()
{
    int d;
    float s1,s2,sum;
    f.num = (f.n1*f.d2)+(f.n2*f.d1);
    f.den = f.d1*f.d2;
    for(int i=1; i<=f.num && i<=f.den; i++)
    {
        if(f.num%i==0 && f.den%i==0)
        d=i;
    }
    f.num = f.num/d;
    f.den = f.den/d;
    
    //for exact value
    
    s1 = (float) f.n1/f.d1;
    s2 = (float) f.n2/f.d2;
    sum = s1+s2;
    return sum;

}


int display(float sum)
{
    printf("SUM:\n %d/%d + %d/%d = %d/%d = %f\n",f.n1,f.d1,f.n2,f.d2,f.num,f.den,sum);
    return 0;
}


int main()
{
    float sum;
    value();
    sum = compute();
    display(sum);
    return 0;
}
