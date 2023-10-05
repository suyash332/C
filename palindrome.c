#include<stdio.h>
void main()
{
    char str[100];
    int i,j,mid,length,flag=0;

    printf("Enter the string");
    scanf("%s",str);

    for(i=0,j=length-1;i<=length/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
    }
    if(flag=0)
    {
        printf("The  string is palindrome");
    }
    else
    {
        printf("The string is not polindreome");

    }
}