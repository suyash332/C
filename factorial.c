#include<stdio.h>
void factorial(int);


void main()
{
    int num;
    
    printf("Enter the number");
    scanf("%d",&num);

    factorial(num);
}

void factorial( int a)
{
    int i,mul=1;
    for(i=a;i>=1;i--)
    {
        mul=mul*i;

    }
    printf("The factorial of a num is %d",mul);
}