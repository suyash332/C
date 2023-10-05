#include<stdio.h>
void main()
{
    int x =5;
    int *p;

    printf("\nThe Value of x is : %d",x);
    printf("\n The Address of x is : %u",&x);

    p=&x;
    printf("\nThe Value of p is:%u",p);

    x=x+2;
    printf("\n The Value of x is %d",x);

    printf("\n The Value of x(using pointer p) is %d",*p);

    *p = *p + 3;
    printf("The Value of x is %d",x);
    printf("\nThe Value of x(using pointer p) is: %d",*p);



}