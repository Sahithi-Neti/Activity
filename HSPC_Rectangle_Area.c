#include<stdio.h>
#include<math.h>

typedef struct
{
	float x,y;
}vertex;

typedef struct
{
	float l,b;
	float area;
	vertex v[3];
}rect;

int input_tot()
{
	int n;
	printf("Enter number of test cases: ");
	scanf("%d",&n);
	return n;
}

rect input_rectangle()
{
    rect r;
    printf("Enter the three vertices of rectangle:\n");
	for(int i=0;i<3;i++)
    {
		scanf("%f%f",&r.v[i].x,&r.v[i].y);
	}
	return r;
}

void input_n_func(int n, rect r[n])
{
	for(int i=0;i<n;i++)
	{
		r[i] = input_rectangle();
	}
}

float max(float s1, float s2, float s3)
{
 	if(s1>s2 && s1>s3)
		return s1;
	else if(s2>s1 && s2>s3)
		return s2;
	else
		return s3;
}

float min(float s1, float s2, float s3)
{
    	if(s1<s2 && s1<s3)
		return s1;
	else if(s2<s1 && s2<s3)
		return s2;
	else
		return s3;
}

void compute(rect *r)
{
	float s1,s2,s3,min_side,max_side,sum;
	s1 = sqrt(pow((r->v[0].x-r->v[1].x),2)+pow((r->v[0].y-r->v[1].y),2));
	s2 = sqrt(pow((r->v[2].x-r->v[1].x),2)+pow((r->v[2].y-r->v[1].y),2));
	s3 = sqrt(pow((r->v[2].x-r->v[0].x),2)+pow((r->v[2].y-r->v[0].y),2));
	min_side = min(s1,s2,s3);
	max_side = max(s1,s2,s3);
	sum = s1 + s2 + s3;
	r->b = sum - min_side - max_side;
    	r->l = min_side;
	r->area = r->l * r->b;
}

void compute_n_func(int n, rect r[n])
{
	for(int i=0;i<n;i++)
	{
		compute(&r[i]);
	}
}

void output(rect r)
{
	printf("\nArea of rectangle with vertices (%.1f,%.1f), (%.1f,%.1f), (%.1f,%.1f) is %.1f",r.v[0].x,r.v[0].y,r.v[1].x,r.v[1].y,r.v[2].x,r.v[2].y,r.area);
}

void output_n_func(int n, rect r[n])
{
	for(int i=0;i<n;i++)
	{
		output(r[i]);
	}
}

int main()
{
	int n;
	n = input_tot();
	rect r[n];
	input_n_func(n,r);
	compute_n_func(n,r);
	output_n_func(n,r);
	return 0;
}
