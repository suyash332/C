#include <stdio.h>
void amg(int);
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    amg(n);
}
void amg(int num)
{
    int temp, cube, rem, sum = 0;
    temp = num;

    while (num > 0)
    {
        rem = num % 10;
        cube = rem * rem * rem;
        sum = cube + sum;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("The number is Amstrong");
    }
    else
    {
        printf("The numb erf is not amstrong");
    }
}