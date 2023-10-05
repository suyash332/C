#include<stdio.h>
void main()
{
    char str[100];
    int i,len=0;
    printf("Enter the string");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;

        if(len%2==1)
        {
              str[i]=str[i]-32;
        }
    }

    printf("\n String %s",str);


}