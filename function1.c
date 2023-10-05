/*. WAP to demonstrate all four categories of functions for volume of the cylinder
 (volume of cylinder: 3.14*r*r*h)
 a) Function without parameters without return value.
 b) Function with parameter without return value.
 c) Function without parameter with return value.
 d) Function with parameters with return value.*/

#include<stdio.h>

void Volume();

void main()
{
    Volume();
}

void Volume()
{
    int r,h;
    float v;
    printf("Enter the Radius of cylinder");
    scanf("%d",&r);
    
    printf("Enter the height of cylinder");
    scanf("%d",&h);

    v=3.14*r*r*h;

    printf("Enter the volume %f",v);
    
    


}
