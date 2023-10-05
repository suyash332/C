#include<stdio.h>
void main()
{
    int N=2;
    int*ptr;

    printf("\nThe sixe of memory space for N is %d bytes",sizeof(N));
    printf("\nAddress of N %u",&N);

    ptr =&N;

    printf("\nPointer ptr Before increment %u",ptr);

    ptr++;

    printf("\nPointer ptr After increment %u",ptr);

    ptr=&N;
    
    printf("\nPointer ptr Before Decrement:%u",ptr);

    ptr--;

    printf("\nPointer After Decrementr: %u",ptr);
}