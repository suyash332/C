#include<stdio.h>
long int Sum(int);

void main()
{
    int n;
    long int c;
    printf("Enter the positive integer");
    scanf("%d",&n);
     c=Sum(n);
    printf("Sum of %d=%ld",n,c);
}
long int Sum(int n)
{
    if(n>0)
    {
        return n + Sum(n-1);
    }
    else
    {
        return 0;
    }
}
