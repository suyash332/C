#include<stdio.h>
void main()
{
    int x[3][3];
    int i,j,count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the Element in array at %d %d",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d",x[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j && x[i][j]==1)
            {
                count++;
            }
        }
    }

    if(count==3)
    {
        printf("The matrix is identical");
    }
    else
    {
        printf("The matrix is not identical");
    } 

} 