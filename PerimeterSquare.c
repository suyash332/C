//WAP to find out perimeter of the Square

#include<stdio.h>

void main()
{
    int perimeter,side;

    printf("Enter the Length of the side");
    scanf("%d",&side);

    perimeter=4*(side);

    printf("when all four side is &%d then the perimeter is %d",side,perimeter);

}