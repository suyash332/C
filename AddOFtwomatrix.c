#include<stdio.h>
void main()
{
    int a[3][3],b[3][3];
    int i,j,sumd=0;
    printf("Print element for first Matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("The element in array %d %d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Print element for second Matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("The element in array %d %d",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of two Matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sumd=sumd+a[i][j]+b[i][j];

        }
    }

    printf("sum is %d",sumd);



}