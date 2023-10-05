#include<stdio.h>
void main()
{
    int a[3][2],b[2][3];
    int i,j;
    printf("Please Enter Array Element in array A :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;i++)
        {
            printf("Please enter Array Element %d %d",i,j);
            scanf("%d",a[3][2]);
        }
        printf("\n");
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
            printf("The element in array");
        }
    }
}