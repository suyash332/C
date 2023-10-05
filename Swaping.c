//Accept two numbers and perform swapping with third variable;
#include<stdio.h>
void main()
{
    int a,b,temp;

    a=6;
    b=7;

    temp=a;
    a=b;
    b=temp;

    printf("The value of a %d and b%d after swaping",a,b);

}