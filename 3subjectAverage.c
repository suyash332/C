//WAP to accept five subject marks and find out total and average of the marks

#include <stdio.h>
void main()
{
    int sub1,sub2,sub3,avg;

    printf("Enter the sub1 marks ");
    scanf("%d",&sub1);

    printf("Enter the sub2 marks ");
    scanf("%d",&sub2);

    printf("Enter the sub3 marks ");
    scanf("%d",&sub3);

    avg =(sub1+sub2+sub3) / 3;

    printf("If the marks of sub1 %d, sub2 %d and sub3 %d then the avg is %d ",sub1,sub2,sub3,avg);
}