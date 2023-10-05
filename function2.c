#include<stdio.h>
int Add(int,int);
void main()
{
    int a,b,c;
    printf("Please Enter Two Numbers");
    scanf("%d %d",&a,&b);

    c=Add(a,b);

    printf("The Addition is %d",c);

}
int Add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}




