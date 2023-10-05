#include<stdio.h>
void main()
{
    char str[100],str1[100],str2[100];
    int i,len=0,wordcount = 1,count=0,found=0;

    printf("Please Enter a String");
    gets(str);

    printf("The string is");
    gets(str);

    printf("The Lnegth of the string");
    for(i=0;str[i]!='\0';i++)
    {
        len++;

    }
    printf("The length of the string %d",len);

    printf("\n String in reverse is");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    for(i = 0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            wordcount++;
        }

    }
    printf("\n No of words in String is %d",wordcount);


    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='A')
        {
            count++;

        }


    }
    printf("\n The string No of a's in string is : %d",count);

    for(i = 0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;   
        }
    }
    printf("\nString in UpperCase is %s",str);

    printf("Please Enter String1");
    gets(str1);

    printf("Please Enter String2");
    gets(str2);


    for(i=0;str1[i]!='\0'|| str2[i]!='\0';i++)
    {
        if(str1[i]>str2[i])
        {
            puts(str1);
            break;

        }
        else if(str2[i]>str1[i])
        {
            puts(str2);
            break;
        }
        else
        {
            printf("\nBoth string are Equal");
        }

    }

}