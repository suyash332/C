//WAP to demonstrate arithmetic operation on two integer numbers.

#include <stdio.h>
void main()
{
    int num1,num2,add,sub,mult,div;

    printf("Enter the num1");
    scanf("%d",&num1);

    printf("Enter the num2");
    scanf("%d",&num2);

    add=num1+num2;
    sub=num1-num2;
    printf("The sum of num1 %d and num %d  then the sum is %d:",num1,num2,add);

    printf("The sub of num1 %d and num %d  then the sum is %d:",num1,num2,sub);
    

}