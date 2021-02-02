//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>

float tromboloid_volume(float h, float b, float d);

int main()
{
  float h,b,d,v;
  printf("Enter height: \n");
  scanf("%f",&h);
  printf("Enter breadth: \n");
  scanf("%f",&b);
  printf("Enter distance: \n");
  scanf("%f",&d);
  v = tromboloid_volume(h,b,d);
  printf("The volume of tromboloid is %f",v);
  return 0;
}

float tromboloid_volume(float h, float b, float d)
{
  float v;
  v = 0.33 *((h*d*b)+(d/b));
  return v;
}
