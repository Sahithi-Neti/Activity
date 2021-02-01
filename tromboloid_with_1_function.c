//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>

float tromboloid_volume(float h, float b, float d);

int main()
{
  float h,b,d,v;
  printf("Enter height: \n");
  printf("Enter breadth: \n");
  printf("Enter distance: \n");
  scanf("%f",&h);
  scanf("%f",&b);
  scanf("%f",&d);
  v = tromboloid_volume(h,b,d);
  printf("The volume of tromboloid is %f",v);
}

float tromboloid_volume(float h, float b, float d)
{
  float v;
  v = 0.33 *((h*d*b)+(d/b));
  return v;
}
