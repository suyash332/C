#include<stdio.h>
void swap(int,int);

void main()
{
    int x,y;
    printf("\n Enter two Number");
    scanf("%d %d",&x,&y);

    printf("\nBefore Swapping");
    printf("x=%d \n y=%d \n",x,y);

    swap(x,y);

    printf("\nAfter Swapping");
    printf("x=%d \n y=%d \n",x,y);
}

void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}