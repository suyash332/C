#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch="";
    FILE*fptr;

    fptr=fopen("myfile.txt","r");
    if(fptr==NULL)
    {
        printf("Error!in opening ");
        exit(1);
    }

    printf("Print the file Contents");

    while(ch!=EOF)
    {
        ch=fget(fptr);
        printf("%c",ch);
        
    }
    printf("\nFile Reading!!Closing the File");
    fclose(fptr);
    


}