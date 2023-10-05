#include<stdio.h>
void main()
{
    int x[10],i,sum=0,sume=0,sumo=0;

    for(i=0;i<10;i++)
    {
        printf("\nPlease Enter Value at index %d:",i);
        scanf("%d",&x[i]);


    }
    

    for(i=0;i<10;i++)
    {
        printf("%d \t",x[i]);

        sum=sum+x[i];
    }

    printf("print the of array %d",&sum);

    for(i=0;i<10;i+=2)
    {
        printf("%d\t",x[i]);
        sume=sume+x[i];

    }
    printf("Sum of Even array%d",x[i]);

    for(i=1;i<10;i+=2)
    {
         printf("%d\t",x[i]);
         sumo=sumo+x[i];
    }
    
    printf("Enter the sum of odd %d",sumo);

    

    
}