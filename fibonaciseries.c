#include<stdio.h>
void fibo(int);

void main()
{
    int num;

    printf("Enter the number");
    scanf("%d",&num);
    fibo(num);

}

void fibo(int n)
{
    int i;

   int a=0,b=0,c=1,i=1,d,temp;

   if(n>=1)
   {
        printf("%d",a);
   }
   if(n>=2)
    {       
        printf("%d",b);

    }
    while(i<n-2)
    {
       c=a+b;
       printf("%d",c);

            b=c;
            

       


    }

} 