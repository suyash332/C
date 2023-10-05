#include<stdio.h>
void cadd(int*,int*);

void main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);

    printf("Before swaping");
    printf("%d %d ",x,y);

    cadd(&x,&y);
    printf("After swaping");
    printf("%d %d",x,y);
    
}
void cadd(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

    
    


