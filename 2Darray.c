#include<stdio.h>
#define rows 3
#define cols 3

void main()
{
    int x[rows][cols],i,j,sum=0,sumd=0,sumnd=0;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("\nPlease Enter Element at Row%d and Col%d:",i,j);
            scanf("%d",x[i][j]);
        }    
    }
    printf("\nMatrix is ...");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            sum = sum + x[i][j];

            if(i=j)
            {
                sumd= sumd+x[i][j];
            }
            else
            {
                sumnd = sumnd + x[i][j];
            }
            
        }
    }
     printf()



}