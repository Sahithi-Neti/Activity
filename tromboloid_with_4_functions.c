//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>

float input()
{
    float x;
    printf("Enter Value:\t");
    scanf("%f",&x);
    return x;
}

float display(float v)
{
  printf("The volume of tromboloid is %f",v);
  return 0.0;
}

float tromboloid_volume(float h, float b, float d)
{
  float v;
  v = 0.33 *((h*d*b)+(d/b));
  return v;
}

int main()
{
  float h,b,d,v;
  printf("Height(h)\n");
  h = input();
  printf("Breadth(b)\n");
  b = input();
  printf("Distance(d)\n");
  d = input();
  v=tromboloid_volume(h,b,d);
  display(v);
  return 0;
 }
