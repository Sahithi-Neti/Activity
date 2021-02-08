//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>

struct points
{
    double X,Y;
}p;

double distance(double x1,double y1,double x2,double y2)
{
    double d,dist;
    d = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    dist = sqrt(d);
    return dist;
}

double getx()
{
    printf("Enter 'x' Co-ordinate:\t");
    scanf("%lf",&p.X);
    return p.X;
}

double gety()
{
    printf("Enter 'y' Co-ordinate:\t");
    scanf("%lf",&p.Y);
    return p.Y;
}

int main()
{
    double x1,y1,x2,y2,d;
    printf("Enter Co-ordinates of First point\n");
    x1=getx();
    y1=gety();
    printf("Enter Co-ordinates of Second point\n");
    x2=getx();
    y2=gety();
    d=distance(x1,y1,x2,y2);
    printf("The Distance between (%lf,%lf) and (%lf,%lf) is %lf\n",x1,y1,x2,y2,d);

    return 0;
}
