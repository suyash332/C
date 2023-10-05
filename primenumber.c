//prime number

#include<stdio.h>
void main()
{
    int num,i;

    printf("Enter the Number");
    scanf("%d",&num);
    i=2;
   while(i<num)
   {
       if(num%i==0)
       {
             break;

       }
       i++;

   }

   if(i==num)
   {
        printf("The number is prime num");
   }
   else 
   {
        printf("The number is not prime");
   }
   
}





