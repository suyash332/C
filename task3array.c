//WAP to find greatest and smallest number in an array.
#include<stdio.h>
void main()
{
    int x[10];
    int i,greatest,smallest;
    printf("Enter the  4 numbers in array \n");
    for(i=0;i<4;i++)
    {  
        printf("Enter the number %d",i+1);
        scanf("\t%d",&x[i]);
    }


    greatest=x[0];

    for(i=1;i<4;i++)
    {
        if(x[i]>greatest)
        {
            greatest=x[i];
        }

    }

    printf("The greatest number in array is %d",greatest);

    smallest=x[0];

    for(i=1;i<4;i++)
    {
        if(x[i]<smallest)
        {
            greatest=x[i];
        }

    }
     printf("The smallest number in array is %d",smallest);




}
        