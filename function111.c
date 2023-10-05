//c) Function without parameter with return value.

#include<stdio.h>
float Volume();
void main()
{

    float v;
    v=Volume();
    printf("Volume of cyl %f",v);
}
float Volume()
{
    int r,h;
    float a;

    printf("Enter the radius");
    scanf("%d",&r);

    printf("Enter the Height");
    scanf("%d",&h);

    a=3.14*r*r*h;

    return a;
}

