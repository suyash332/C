#include<stdio.h>
void main()
{
    int N =2;
    int *ptr;

    printf("\nThe size of memory for N is %d bytes",sizeof(N));
    printf("\nAddress of N:%u",&N);

    ptr=&N;

    printf("\nPointer ptr Before Increment:%u",ptr);

    ptr++;

    printf("\nPointer ptr After Increment :%u",ptr);

    ptr=&N;
    printf("\nPointer ptr Before Decrement:%u",ptr);

    ptr--;
    printf("\nPinter ptr After Decrement:%u",ptr);


}