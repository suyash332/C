#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20], str2[20];
    int len = 0;

    printf("Please Enter Str1");
    scanf("%s", str1);

    printf("Enter the str2");
    scanf("%s", str2);

    printf("Length of string1 %s is : %d \n", str1, strlen(str1));
    printf("Length of str2 %s is :%d\n", str2, strlen(str2));
    printf("The string2%s in lower case is\n", str2, strlwr(str2));
    printf("The copied string is%s\n", strcpy(str2, str1));
    printf("The string2 %s in upper case is\n", strupr(str2));
    printf("The string2 %s in upper case is\n", strupr(str2));
    printf("The string2 %s in upper case is\n", strupr(str2));

    printf("to mix two string is %s\n",str1,str2,strcat(str1, str2));
    printf("The string2 %s in upper case is\n", strupr(str2));
}