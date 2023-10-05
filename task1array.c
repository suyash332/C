#include<stdio.h>
void main()
{
    int x[10];
    int i,sum=0,average;

    for(i=0;i<10;i++)
    {
        printf("Enter the marks of Student %d",i+1);
        scanf("%d",&x[i]);
    }

    for(i=0;i<10;i++)
    {
        sum = sum + x[i];
    }

    average=sum/10;

    printf("theb average of ten students %d",average);

}