// Create a structure Student. Create array of 10 students using MACRO and display data in tabular form.
#include <stdio.h>
#define st 3
struct Student
{
    int rollno;
    char name[10];
    float marks;
};
void main()
{
    struct Student s[st];
    int i;
    for (i = 0; i < st; i++)
    {
        printf("\nEnter Roll No for Student %d:", i);
        scanf("%d", &s[i].rollno);

        printf("\nEnter Name for Student %d", i);
        scanf("%s", s[i].name);

        printf("\nEnter Marks for Student %d", i);
        scanf("%f", &s[i].marks);
    }
    printf("ID \t RollNo \t Name \t Marks \n");

    for (i = 0; i < st; i++)
    {
        printf("%d \t%d  \t%s \t%f", i, s[i].rollno, s[i].name, s[i].marks);
        printf("\n");
    }
}
