/*WAP a program to accept Percentage from user and check the GRADE
 A. Above 70% - Grade A 
 B. Between 60% to 70% - Grade B+. 
 C. Between 45% to 60% - Grade B. 
 D. Between 35% to 45% - Grade C.
 E. Less than 35% - Fai*/

 #include<stdio.h>
 void main()
 {
    int grade;

    printf("Enter the Grade");
    scanf("%d",&grade);

    if(grade>70)
    {
        printf("Grade A");

    }
    if(grade>60 && grade<=70)
    {
        printf("Grade B");

    }
    else
    {
        printf("Fail");
        
    }
 }