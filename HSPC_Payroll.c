#include <stdio.h>
#include <string.h>

struct emp
{
    char name[20];
    int mins;
    float hrs;
    float h_wage;
    float pay;
};

int input_tot()
{
    int n;
    printf("Enter number of employees");
    scanf("%d",&n);
    return n;
}
struct emp input_one()
{
    struct emp e;
    printf("Enter name and hourly wage\n");
    scanf("%s %f",e.name, &e.h_wage);

    return e;
}

int find(int n, struct emp e[n], char name[])
{
    for (int i = 0; i < n; i++)
    {
        if (!strcmp(name, e[i].name))
            return i;
    }

    return 0;
}

void input_n_func(int n, struct emp e[n])
{
    for (int i = 0; i < n; i++)
        e[i] = input_one();
}

void input_timeCards()
{
    int n , min=0, k;
    char name[100];
    
    printf("Enter number of time cards:\n");
    scanf("%d", &n);
    struct emp e[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d name and minutes worked:\n",i+1);
        scanf("%s %d",name, &min);
        k = find(n, e, name);
        e[k].mins += min;
    }
}

float compute_hours(float minutes)
{
    return minutes / 60;
}

void compute(struct emp *p)
{
    p->hrs = compute_hours(p->mins);
    
    if (p->hrs <= 40.00)
        p->pay = p->h_wage * p->hrs;
    else
        p->pay = (p->h_wage * 40.00) + (1.5 * (p->h_wage * (p->hrs - 40.00)));
}

void compute_n_func(int n, struct emp e[n])
{
    for (int i = 0; i < n; i++)
        compute(&e[i]);
}

void output_one(struct emp *e)
{
    printf("%s: %f hours, $%f\n", e->name, e->hrs,  e->pay);
}

void output_n_func(int n, struct emp e[n])
{
    for (int i = 0; i < n; i++)
        output_one(&e[i]);
}

int main()
{
    int n;
    n = input_tot();
    struct emp e[n];
    input_n_func(n, e);
    input_timeCards(n, e);
    compute_n_func(n, e);
    output_n_func(n, e);

    return 0;
}
