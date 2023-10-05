#include<stdio.h>
void floa(float*,float*);

void main()
{
    float x,y;
    printf("Enter the number");
    scanf("%f %f",&x ,&y);

   floa(&x,&y);

}
void floa(float *p1,float *p2)
{
    float c;

    c=*p1+*p2;

    printf("The sum is %f",c);

    
}


