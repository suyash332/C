// WAP to calculate area of rectangle
#include <stdio.h>
void main()
{
    int l, b, area;
    printf("Enter the length");
    scanf("%d", &l);

    printf("Enter the breath");
    scanf("%d", &b);

    area = l * b;
    printf("when the length %d and breath %d  is then the area of reactangle is %d", l, b, area);
}
