#include<stdio.h>
void main()
{
    char str[100];
    int i ,j;

    printf("Enter the string");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        
        if(str[i]!='a' && str[i]!='e')
        {
            printf("%c",str[i]);
              
        } 
    }

}