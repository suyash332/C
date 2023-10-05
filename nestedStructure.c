#include<stdio.h>
struct Student
{
    int rollno;
    char name[25];
    float marks;

    struct date
    {
        int dd;
        int mm;
        int yy;
    }DOB;

};

typedef int integer;

typedef struct Student Student;

int main()
{
    Student s1,s2;
    integer x;

    printf("Enter Roll.No for Student:");
    scanf("%d",&s1.rollno);
    printf("Enter Name of Student");
    scanf("%s",s1.name);
    printf("Enter Marks for student");
    scanf("%f",&s1.marks);

    printf("Enter Day of DOB for Student");
    scanf("%d",&s1.DOB.dd);

    printf("Enter Month of DOB for Student");
    scanf("%d",&s1.DOB.mm);

    printf("Enter year of DOB for Student");
    scanf("%d",&s1.DOB.yy);


    s2=s1;

    printf("\nEntered values for S1:Roll No : %d ,Name :%s,Marks : %.2f,DOB:%d/%d/%d\n",s1.rollno,s1.name,s1.marks,s1.DOB.dd,s1.DOB.mm,s1.DOB.yy);
    printf("\nEntered values for S2:Roll No : %d ,Name :%s,Marks : %f,DOB:%d/%d/%d\n",s2.rollno,s2.name,s2.marks,s2.DOB.dd,s2.DOB.mm,s2.DOB.yy);


}
