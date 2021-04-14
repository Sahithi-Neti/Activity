#include<stdio.h>
typedef struct
{
	int n;
	int num[10];
	int den[10];
	int final_num;
	int final_den;
}frac;

int input_tot()
{
	int n;
	printf("Enter number of test cases: ");
	scanf("%d",&n);
	return n;
}

frac input_fraction()
{
	frac f;
	printf("Enter the number of fractions: ");
	scanf("%d",&f.n);
	for(int i=0;i<f.n;i++)
	{
	    printf("Enter denominator of the fraction %d: ",i+1);
	    scanf("%d",&f.den[i]);
	    f.num[i]=1;
	}
	return f;
}

void input_n_func(int n, frac f[n])
{
	for(int i=0;i<n;i++)
	{
		f[i] = input_fraction();
	}
}

int hcf(int a, int b)
{
    int h;
    while((a%b)>0)
    {
        h = a%b;
        a = b;
        b = h;
    }
    return b; 
}

void compute(frac *f)
{
	int final_num=0,final_den=1, gcd;
	for(int i=0;i<f->n;i++)
	{
		final_den *= f->den[i];
	}
	for(int i=0;i<f->n;i++)
	{
		final_num += (f->num[i]) * (final_den/f->den[i]);
	}
	gcd = hcf(final_num, final_den);
    f->final_num = final_num/gcd;
	f->final_den = final_den/gcd;
}

void compute_n_func(int n, frac f[n])
{
	for(int i=0;i<n;i++)
	{
		compute(&f[i]);
	}
}

void output_fraction(int n,frac f)
{
	for(int i=0;i<f.n-1;i++)
	{
	    printf("%d/%d + ",f.num[i],f.den[i]);
    }
    printf("%d/%d = %d/%d\n",f.num[f.n-1],f.den[f.n-1],f.final_num,f.final_den);
}

void output_n_func(int n, frac f[n])
{
	for(int i=0;i<n;i++)
	{
		output_fraction(n,f[i]);
	}
}

int main()
{
	int n;
	n = input_tot();
	frac f[n];
	input_n_func(n,f);
	compute_n_func(n,f);
	output_n_func(n,f);
	return 0;
}
