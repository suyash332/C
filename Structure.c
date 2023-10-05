#include<stdio.h>

struct student
{
    int rollno;
    char name[50];
    float marks;
};
void main()
{
    struct student s;
    printf("The size of %d",sizeof(s));

    printf("\nPlease Enter Roll no :");
    scanf("%d",&s.rollno);

    printf("\nPlease Enter Name");
    scanf("%d",s.name);
    
    printf("\nPlease Enter Marks");
    scanf("%d",&s.marks);

    printf("\n\n Student Data -Roll No is:%d\tName is :%s\tMarks is: %f,s.rollno,s.name,s.marks");
    

}