#include<stdio.h>
struct Emp
{
    int Id;

    char name[50];
    float salary;
};
typedef struct Emp ee;
void main()
{

    ee e[5];

    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter Id of Emp");
        scanf("%d",&e[i].Id);

        printf("\nEnter name of Emp");
        scanf("%s",e[i].name);

        printf("\nEnter Marks of Emp");
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<5;i++)
    {
        printf("The Employe Id %d the person name %s the salary of Emp %f",e[i].Id,e[i].name,e[i].salary);
    }


}