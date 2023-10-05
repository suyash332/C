#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    int i,n,n1;

    printf("Enter the no of element");
    scanf("%d",&n);
    
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory not allocated");
        exit(1);
    }
    else
    {
        printf("Memory sucessfully alocated");
        for(i=0;i<n;i++)
        {
            printf("%d",ptr[i]);
        } 

        printf("Enter Elements in array");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        } 
        printf("\nEnter the new size of the array");
        scanf("%d",&n1);

        ptr=realloc(ptr,n1*sizeof(int));
        printf("Memory Sucessufully reallocateed using realloc");
        printf("\n Enter Aditional Elements of array \n");

        for(i=n;i<n1;i++)
        {
            scanf("%d",&ptr);

        }
        printf("The element of new realloctaed array are:");
        for(i=0;i<n1;i++)
        {
            printf("%d",ptr[i]);

        }
        free(ptr);
    }



}