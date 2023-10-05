#include<stdio.h>
void main()
{
    int x=4;
    float y=9.6;
    char c= 's';

    int *p1;
    float *p2;
    char *p3;

    p1=&x;
    p2=&y;
    p3=&c;

   
    printf("The value of %s",p3);
   
    

}