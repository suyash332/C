#include<stdio.h>
void main()
{
    int x[10],i,num,flag=0;
   for(i=0;i<10;i++)
   {
    printf("Enter the number in array at index %d",i);
    scanf("%d",&x[i]);
   }

   for(i=0;i<10;i++)
   {
    printf("%d\t",x[i]);
   }

  printf("\nPlease Enter number to Search in Array");
  scanf("%d",num);

  for(i=0;i<10;i++)
  {
    if(num==x[i])
    {
        printf("The Number is found at location %d"i);
        flag=1;
        break;
    }
  }

  if(flag==0)
  {
    printf("\nNumber %d is not found in Array",num);
  }

  





    
}