#include<stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks;

};
void main()
{
    struct Student s[5];
    float total = 0;
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nEnter Roll no for Students %d",i);
        scanf("%d",&s[i].rollno);

        printf("\nEnter Name for Student %d:",i);
        scanf("%s",s[i].name);

        printf("\nEnter Marks for Students %d:",i);
        scanf("%f",&s[i].marks);

        total = total + s[i].marks;
    }
    printf("Student Data ...\n");

    for(i=0;i<5;i++)
    {
        printf("Student %d: %d \t%s\t%f\n",i,s[i].rollno,s[i].name,s[i].marks);
    }
    printf("\n Total Marks of Class is %f",total);
}



