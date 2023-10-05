/*1. WAP using following menus-
 Choice-1: Accept number and find out square and cube.
 Choice-2: Check whether the given year is LEAP or not. 
 If user enters wrong choice appropriate message should get displayed.*/

 #include<stdio.h>

 void main()
 {
    int x,choice,square,cube,y;

    printf("Enter the menu");
    printf("1: Accept number and find out square and cube");
    printf("2: Check whether the given year is LEAP or not.");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
            printf("Enter the Number");
            scanf("%d",&x);
            square=x*x;
            cube=x*x*x;
            printf("The number %d and its square%d and cube%d is",x,square,cube);
            break;
     case 2:
            printf("Enter the Year");
            scanf("%d",&y);
            if(y%4==0)
            {
                printf("%d is a Leaf Year",y);

            }
            else
            {
                printf("%d is not a leaf Year",y);
            }

            break;
            


    
    default:printf("Incorect Choice");

            break;
    }


 }