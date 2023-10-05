#include<stdio.h>
void main()
{
    int a=100;
    int *ptr;

    ptr=&a;

    printf("The pointer before increment is %u",ptr);
     printf("The pointer before increment is %d",*ptr);

    ptr=ptr+2;

    printf("The pointer after increment is %u",ptr);
   



}