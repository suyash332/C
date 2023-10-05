#include<stdio.h>
void Add();
void main()
{
    Add();

}
void Add()
{
    int x,y,z;
    printf("Please enter two Numbers");
    scanf("%d %d",&x,&y);

    z=x+y;
    printf("The Addition is %d",z);
}