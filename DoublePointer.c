#include<stdio.h>
void main()
{
    int a=5;
    
    int *ptr1;

    int**ptr2;
    
    ptr1=&a;

    ptr2=&ptr1;

    printf("\nAddress of a is %u",&a);
    printf("\nAddress of a using double pointer(ptr1) is %u",ptr1);
    printf("\nAddress of a using double pointer(ptr2) is :%u",*ptr2);

    printf("\n\n Value of a %d\n",a);
    printf("Value of a using single pointer (ptr1)=%d\n",*ptr1);
    printf("Value of a using double pointer (ptr2)=%d\n",**ptr2);

}
 


