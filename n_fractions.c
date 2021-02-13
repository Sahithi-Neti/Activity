//WAP to find the sum of n fractions.
#include<stdio.h>

struct fractions{
    int n;
    int num[500];
    int den[500];
}f;

int getvalue()
{
    printf("Enter total number of fractions to be added:");
    scanf("%d",&f.n);
    printf("Enter numerators of %d fractions\n",f.n);
    for(int i=0; i<f.n; i++)
    {
        scanf("%d",&f.num[i]);
    }
    printf("Enter denominators of %d fractions\n",f.n);
    for(int j=0; j<f.n; j++)
    {
        scanf("%d",&f.den[j]);
    }
    return 0;
}


int gcd(int N, int D)
{
    if (D==0)
    {
        return N;
    }
    return gcd(D , N%D);
}


int lcm(int d[], int n)
{
    int val;
    for(int i=1; i<n; i++)
    {
        val = (((d[i]*val)) / (gcd(d[i],val)));
    }
    
    return val;
}


void compute()
{
    int N = 0;
    int D = lcm(f.den,f.n);
    for(int i=0; i<f.n; i++)
    {
        N = N+(f.num[i])*(D / f.den[i]);
    }
    
    int Gcd = gcd(N,D);
    
    N = N/Gcd;
    D = D/Gcd;
    
    display(N,D);
}

int display(int n, int d)
{
    printf("The sum of given fractions is %d/%d\n",n,d);
    return 0;
}

int main()
{
    getvalue();
    compute();
    return 0;
}   

