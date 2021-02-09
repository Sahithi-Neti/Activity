//WAP to find the sum of two fractions.

#include<stdio.h>

int value()
{
    int a;
    printf("Value:\t");
    scanf("%d",&a);
    return a;
}

float compute(int n1, int d1, int n2, int d2)
{
    float s1,s2,sum;
    s1 = (float) n1/d1;
    s2 = (float) n2/d2;
    sum = s1+s2;
    return sum;
}


float display(int n1, int d1, int n2, int d2, float sum)
{
    printf("SUM:\n %d/%d + %d/%d = %f\n",n1,d1,n2,d2,sum);
}


int main()
{
    int n1,n2,d1,d2;
    float sum;
    printf("First fraction\n");
    printf("Numerator ");
    n1 = value();
    printf("Denominator ");
    d1 = value();
    printf("Second fraction\n");
    printf("Numerator ");
    n2 = value();
    printf("Denominator ");
    d2 = value();
    sum = compute(n1,d1,n2,d2);
    display(n1,d1,n2,d2,sum);
    return 0;
}
