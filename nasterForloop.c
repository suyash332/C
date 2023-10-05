#include<stdio.h>
void main()
{
    int i,j,x,z;

    for(i=1;i<=5;i++)
    {
        printf("New Iteration of Outer Loop");
        for(j=1;j<=3;j++)
        {
            printf("i=%d AND j=%d\n",i,j);
        }
    }

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("#");

        }
        printf("\n");
    }


   for(i=1;i<=5;i++)
   {
    for(j=1;j<=i;j++)
    {
        printf("#");

    }
    printf("\n");
   }

   for(i=1;i<=5;i++)
   {
    for(j=5;j>=i;j--)
    {
        printf("#");

    }
    printf("\n");
   }
   x=65;
   for(i=1;i<=5;i++)
   {
    for(j=1;j<=i;j++)
    {
        printf("%c",x);
    }
    x++;
    printf("\n");
   }
   
   for(i=1;i<=5;i++)
   {
        z=1;
        for(j=1;j<=i;j++)
        {
            
            printf("z");
            z=z+1;
        }
        printf("\n");
   }

   for(i=5;i>=1;i--)
   {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);

    }
    printf("\n");

   }                            

   for(i=1;i<=5;j++)
   {
    if(i%2!=0)
    {
        for(j=1;j<=i;j++);
        {
            printf("*");

        }
    }
    
    
   }
    
    
    
}