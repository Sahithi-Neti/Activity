//WAP to find the distance between two point using 4 functions.
#include <stdio.h>

#include <math.h>

struct points
{
    double x1,y1,x2,y2;
}p;

double distance(double x1,double y1,double x2,double y2)
{
    double d,dist;
    d = ((p.x2-p.x1)*(p.x2-p.x1)) + ((p.y2-p.y1)*(p.y2-p.y1));
    dist = sqrt(d);
    return dist;
}

double getpoint()
{
    printf("Enter Co-ordinates of First point\n");
    printf(" 'x' Co-ordinate:\n");
    scanf("%lf",&p.x1);
    printf(" 'y' Co-ordinate:\n");
    scanf("%lf",&p.y1);
    printf("Enter Co-ordinates of Second point\n");
    printf(" 'x' Co-ordinate:\n");
    scanf("%lf",&p.x2);
    printf(" 'y' Co-ordinate:\n");
    scanf("%lf",&p.y2);
    return 0.00;
}

double display(double x1, double y1, double x2, double y2, double d)
{
    printf("The Distance between (%lf,%lf) and (%lf,%lf) is %lf\n",p.x1,p.y1,p.x2,p.y2,d);
    return 0.00;
}

int main()
{
    double d;
    getpoint();
    d=distance(p.x1,p.y1,p.x2,p.y2);
    display(p.x1,p.y1,p.x2,p.y2,d);

    return 0;
}
