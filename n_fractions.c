//WAP to find the sum of n fractions.
#include<stdio.h>

struct fractions{
    int n,d;
};


struct fractions input_one()
{
    struct fractions i;
    printf("Enter fraction- Numerator followed by denominator:\n");
    scanf("%d%d",&i.n,&i.d);
    return i;
}
struct fractions input_n(int n,struct fractions a[n])
{
    
    for(int i=0;i<n;i++)
    {
        a[i]=input_one();
    }
}

int hcf(int N, int D)
{
     int hcf=1,temp;
    if ( N<D) 
    {
      temp=N;
      N=D;
      D=temp;
    }
    if ( N%D==0) 
     return D;

    for (int i = 2;i <= D/2; i++)
    {

      if (N % i == 0 && D % i == 0)
	        hcf = i;
    }
  return hcf;
}


struct fractions compute_one(struct fractions f1,struct fractions f2)
{
    struct fractions f;
    f.n=(f1.n*f2.d)+(f2.n*f1.d);
    f.d=f1.d*f2.d;
    return f;
}
struct fractions compute_n(int n,struct fractions a[n])
{
    struct fractions sum;
    sum.n=0;
    sum.d=1;
    for(int i=0;i<n;i++)
    {
        sum=compute_one(a[i],sum);
    }
    int divisor=hcf(sum.n,sum.d);
    struct fractions result={sum.n/divisor,sum.d/divisor};
    return result;
}

struct fractions display(struct fractions result)
{
    printf("The sum of given fractions is:\t%d/%d",result.n,result.d);
    
}

int main()
{
    int n;
    printf("Enter number of fractions\n");
    scanf("%d",&n);
    struct fractions a[n],sum;
    input_n(n,a);
    sum=compute_n(n,a);
    display(sum);
    
}

