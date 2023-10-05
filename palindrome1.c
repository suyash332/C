#include <stdio.h>
void rev(int);
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    rev(n);
}
void rev(int num)
{
    int temp, rev = 0, rem;
    printf("the num%d",num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        printf("the rev%d",rev);
        num = num / 10;
    }
    printf("the rev is %d",rev);
    if (rev == temp)
    {
        printf("The number is poli");
    }
    else
    {
        printf("The number is not poli");
    }
}