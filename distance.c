//WAP to find the distance between two point using 4 functions.
#include <stdio.h>

#include <math.h>

double distance(double x1,double y1,double x2,double y2)
{
    double d,dist;
    d = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    dist = sqrt(d);
    return dist;
}

double getpoint(double *x1, double *y1, double *x2, double *y2)
{
    double p,q,r,s,d;
    printf("Enter Co-ordinates of First point\n");
    printf(" 'x' Co-ordinate:\n");
    scanf("%lf",&p);
    *x1=p;
    printf(" 'y' Co-ordinate:\n");
    scanf("%lf",&q);
    *y1=q;
    printf("Enter Co-ordinates of Second point\n");
    printf(" 'x' Co-ordinate:\n");
    scanf("%lf",&r);
    *x2=r;
    printf(" 'y' Co-ordinate:\n");
    scanf("%lf",&s);
    *y2=s;
    d = distance(*x1,*y1,*x2,*y2);
    return d;
}

double display(double x1, double y1, double x2, double y2, double d)
{
    printf("The Distance between (%lf,%lf) and (%lf,%lf) is %lf\n",x1,y1,x2,y2,d);
    return 0.00;
}

int main()
{
    double x1,y1,x2,y2,d;
    d = getpoint(&x1,&y1,&x2,&y2);
    display(x1,y1,x2,y2,d);
    return 0;
}
