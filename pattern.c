/*
  1
  2  1
  1  2  3
  4  3  2  1
  1  2  3  4   
*/

#include<stdio.h>

void main()
{
    int i ,j;

    for(i=1;i<=5;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        else
        {
            for(j=i;j>=1;j--)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    }
}