//WAP to find the sum of two fractions.

#include<stdio.h>

struct frac{
    int n,d;
};


int value(struct frac*f, struct frac*p)
{
    printf("First fraction\n");
    printf("Numerator-Value:\t");
    scanf("%d",&f->n);
    printf("Denominator-Value:\t ");
    scanf("%d",&f->d);
    printf("Second fraction\n");
    printf("Numerator-Value:\t");
    scanf("%d",&p->n);
    printf("Denominator-Value\t");
    scanf("%d",&p->d);
    return 0;
}

int hcf(int n,int d)
{
    int h;
 while((n%d)>0)
    {
        h = n%d;
        n = d;
        d = h;
    }
    return d;   
}

void compute(struct frac f, struct frac p, struct frac*r)
{
    int d;
    float s1,s2,sum;
    r->n = (f.n*p.d)+(p.n*f.d);
    r->d = f.d*p.d;
    d=hcf(r->n,r->d);
    r->n = r->n/d;
    r->d = r->d/d;

}


void display(struct frac f, struct frac p, struct frac r)
{
    printf("SUM:\n %d/%d + %d/%d = %d/%d\n",f.n,f.d,p.n,p.d,r.n,r.d);
}


int main()
{
    struct frac f;
    struct frac p;
    struct frac r;
    value(&f,&p);
    compute(f,p,&r);
    display(f,p,r);
    return 0;
}
