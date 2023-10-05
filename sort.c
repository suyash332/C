#include<stdio.h>
void main()
{
    int x[5];
    
    int i,j,temp,k;

    printf("Enter an Element in array");

    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<7-i;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
        printf("Pass%d\n:",i);
        for(k=0;k<5;k++)
        {
             printf("%d",x[k]);
        
        }
            
    }
    printf("\nFinal Sorted array is\n");
    for(i=0;i<5;i++)
    {
        printf("%d",x[i]);
    }

}