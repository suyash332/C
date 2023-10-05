#include<stdio.h>

float Volume(int,int);

void main()
{
    int r,h;
    float v;
    printf("Enter the radius");
    scanf("%d",&r);

    printf("Enter the height");
    scanf("%d",&h);

    v=Volume(r,h);
    printf("The Volume of cylin %f",v);
}
float Volume(int a,int b)
{
    float c;
    c=3.14*a*a*b;
    return c;
    
}
