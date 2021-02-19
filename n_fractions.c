//WAP to find the sum of n fractions.
#include<stdio.h>

struct fractions{
    int n,d;
};

int tot_frac()
{
    int t;
    printf("Enter total number of fractions to be added:");
    scanf("%d",&t);
    return t;
}

void getvalue(int n, struct fractions*num, struct fractions*den)
{
    
    printf("Enter numerators of %d fractions\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i].n);
    }
    printf("Enter denominators of %d fractions\n",n);
    for(int j=0; j<n; j++)
    {
        scanf("%d",&den[j].d);
    }
}


int hcf(int N, int D)
{
    if (D==0)
    {
        return N;
    }
    return hcf(D , N%D);
}


int lcm(struct fractions*d, int n)
{
    int val;
    for(int i=1; i<n; i++)
    {
        val = (((d[i].d*val)) / (hcf(d[i].d,val)));
    }
    
    return val;
}


void compute(int t, struct fractions num[], struct fractions den[],int l, struct fractions*f)
{
    f->n = 0;
    f->d = l;
    for(int i=0; i<t; i++)
    {
        f->n = f->n+(num[i].n)*(f->d /den[i].d);
    }
    
    int g = hcf(f->n,f->d);
    
    f->n = f->n/g;
    f->d = f->d/g;
}

void display(int n, int d)
{
    printf("The sum of given fractions is %d/%d\n",n,d);
}

int main()
{
    int n,l;
    n = tot_frac();
    struct fractions f;
    struct fractions num[n];
    struct fractions den[n];
    getvalue(n,num,den);
    l=lcm(den,n);
    compute(n,num,den,l,&f);
    display(f.n,f.d);
    return 0;
}

