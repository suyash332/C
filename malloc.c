#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    int n, i, sum = 0;
    printf("\nEnter the number of element in array");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("\nMemory not allocated");
        exit(1);
    }
    else
    {
        printf("\nMemory successfully allocated  using malloc");

        printf("\nThe initial value of t he element of the array are(Could Have Garbage Value)\n");
        for (i = 0; i < n; i++)
        {
            printf("%d", ptr[i]);
        }

        printf("Enter Element in array");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
            sum = sum + ptr[i];
        }
        printf("\nEnter the elements of array are");
        for (i = 0; i < n; i++)
        {
            printf("%d", ptr[i]);
        }
        printf("/nThe sum of the Array Element is %d ", sum);
        
    }
    free(ptr);
}