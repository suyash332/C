#include<stdio.h>
void Add(int,int);

void main()
{
    int x,y,z;

    printf("Please Enter Two Numbers that you want to Add:");
    scanf("%d %d",&x,&y);
    z=Add(x,y);

    printf("The Addition is %d",z);
}
void Add(int a,int b)
{
    int sum;
    sum = a + b;
    return sum;
}
