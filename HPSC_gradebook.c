#include<stdio.h>
 
typedef struct
{
	char name[10];
	int marks[10];
      char grade;
      float avg;
}student;
 
typedef struct
{
	char course_name[10];
	int students;
      float weight[10];
      int weights;
      student std[10];
}gradebook;
 
int input_tot()
{
    int n;
	printf("Enter the number of gradebooks to be generated:");
	scanf("%d",&n);
	return n;
}
 
student input_student(int weights)
{
	student s;
	printf("\nEnter the student name: ");
	scanf("%s",s.name);
	printf("Enter the scores of the student: ");
	for(int i=0;i<weights;i++)
	{
		scanf("%d",&s.marks[i]);
	}
	return s;
}
 
gradebook input_gradebook()
{
	gradebook g;
	printf("\nEnter the course name: ");
	scanf("%s",g.course_name);
	printf("Enter no of students and no of weights: ");
	scanf("%d%d", &g.students, &g.weights);
	printf("Enter value of weights: ");
	for(int i=0;i<g.weights;i++)
	{
		scanf("%f",&g.weight[i]);
	}
	for(int i=0;i<g.students;i++)
	{
		g.std[i] = input_student(g.weights);
	}
	return g;
}
 
void input_n_func(int n, gradebook g[n])
{
	for(int i=0;i<n;i++)
	{
		g[i] = input_gradebook();
	}
}
 
char compute_grade(float mrks)
{
	char grade;
	if(mrks>=0 && mrks<60)
		grade = 'F';
	else if(mrks>=60 && mrks<70)
		grade = 'D';
	else if(mrks>=70 && mrks<80)
		grade = 'C';
      else if(mrks>=80 && mrks<90)
		grade = 'B';
      else if(mrks>=90 && mrks<=100)
		grade = 'A';
	return grade;
}
 
void compute_students(student *std, gradebook g)
{
	float tot_weights,tot_score;
	for(int i=0;i<g.weights;i++)
	{
		tot_weights += g.weight[i];
	}
	for(int i=0;i<g.weights;i++)
	{
		tot_score += std->marks[i]*g.weight[i];
	}
	std->avg = tot_score/tot_weights;
	std->grade = compute_grade(std->avg);
}
 
void compute_gradebook(gradebook *g)
{
    for(int i=0;i<g->students;i++)
    {
        compute_students(&g->std[i],*g);
    }
}
 
void compute_n_func(int n, gradebook g[n])
{
	for(int i=0;i<n;i++)
	{
		compute_gradebook(&g[i]);
	}
}
 
void output_gradebook(gradebook g)
{
	for(int i=0;i<g.students;i++)
	{
		printf("\n%s \t %.2f %c",g.std[i].name,g.std[i].avg,g.std[i].grade);
	}
}
 
void output_n_func(int n, gradebook g[n])
{
	for(int i=0;i<n;i++)
	{
	    printf("\n%s",g[i].course_name);
		output_gradebook(g[i]);
	}
}
 
int main()
{
	int n;
	n = input_tot();
	gradebook g[n];
	input_n_func(n,g);
	compute_n_func(n,g);
	output_n_func(n,g);
	return 0;
}
