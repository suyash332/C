#include<stdio.h>
void main()
{
    int n,m,l,small,i;

    printf("Enter the first number");
    scanf("%d",&n);
    

    printf("\nEnter the second number");
    scanf("%d",&m);

    printf("\nEnter the third number");
    scanf("%d",&l);

    if(n<m&&n<l)
    {
        small=n;
        
    }
    else if(m<n&&m<l)
    {
          small=m;

    }
    else
    {
          small=l;
    }

    for(i=small;i>1;i--)
    {
            if (m%i==0&&l%i==0&&n%i==0)
            {
                printf("GCD of three number is %d",i);
                break;
            }
    }




}