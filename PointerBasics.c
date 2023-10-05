#include<stdio.h>
void main()
{
    int x = 5;
    int*p;

    printf("\n The Value of x is %d",x);
    printf("\n The Address of x is %u",&x);

    p=&x;
    printf("\n The value of p is %u",p);

    x=x+2;
    printf("\nThe value of x is %d",&x);

    printf("\nThe value of x(using pointer p) is %d",*p);

    *p = *p+3;
    printf("\nThe value of x is %d",x);
    printf("\nThe value of x(using pointer p)is %d",*p);
}