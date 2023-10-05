#include<stdio.h>
void Add(int,int);
void main()
{
    int a,b;
    printf("Please Enter Two number");
    scanf("%d %d",&a,&b);
    Add(a,b);
}
void Add(int x,int y)
{
    int z=0;
    z = x+y;
    printf("The Addition is %d",z);
}