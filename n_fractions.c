//WAP to find the sum of n fractions.
#include<stdio.h>

struct fractions{
    int n,d;
};


struct fractions input_one(int n)
{
    struct fractions i;
    printf("Enter %d fractions- Numerator followed by denominator:\n",n);
    scanf("%d%d",&i.n,&i.d);
    return i;
}
struct fractions input_n(int n,struct fractions a[n])
{
    
    for(int i=0;i<n;i++)
    {
        a[i]=input_one(n);
    }
}

int hcf(int a, int b)
{
     int hcf=1,temp;
    if ( a<b) 
    {
      temp=a;
      a=b;
      b=temp;
    }
    if ( a%b==0) 
     return b;

    for (int i = 2;i <= b/2; i++)
    {

      if (a % i == 0 && b % i == 0)
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

struct fractions display(int t,struct fractions a[t], struct fractions result)
{
    printf("The sum of\n");
    for(int i=0; i<t; i++)
    {
        printf("%d/%d",a[i].n,a[i].d);
        if((i+1)==t)
        {
            printf("=");
        }
        else
        {
            printf("+");
        }
   }
   printf("%d/%d\n",result.n,result.d);
}


int main()
{
    int n;
    printf("Enter number of fractions to be added\n");
    scanf("%d",&n);
    struct fractions a[n],sum;
    input_n(n,a);
    sum=compute_n(n,a);
    display(n,a,sum);
    
}
