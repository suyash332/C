#include<stdio.h>
void main()
{
    int N=5;

    int*ptr;

    ptr=&N;

    printf("\nThe size of memory space for N is %d bytes ",sizeof(N));

    printf("\n Pointer ptr before Addition %u",ptr);

    ptr=ptr+3;

    printf("Pointer ptr after Addition %u",ptr);

    ptr=&N;

    printf("\nPointer ptr before Subtraction %u",ptr);
    ptr=ptr-5;

    printf("\nThe pointer after addition %u",ptr);

}