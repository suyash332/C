/*WAP using switch case for arithmetic operation on two numbers, if user enters an operator as
choice, the appropriate operation should perform.
 If user enters wrong choice appropriate message should get displayed.
 i.e. + is for addition
 - is for subtraction*/

#include <stdio.h>

void main()
{
    char choice;
    int  x, y, add, sub;

    printf("Enter the Choice \n 1)Do addition oper put + \n 2) Do subtraction oper put -");
    scanf("%c", &choice);

    
    switch (choice)
    {
      case '+':
            printf("Enter the First Number");
            scanf("%d", &x);

            printf("Enter the Second Number");
            scanf("%d", &y);
            add = (x + y);
            printf("The addition of two number is %d",add);
            break;
     case '-':
            printf("Enter the First Number");
            scanf("%d", &x);

            printf("Enter the Second Number");
            scanf("%d", &y);
            sub = x - y;
            printf("The subtraction of two number is %d", sub);

    default:
        printf("wrong Choice");

        break;
    }
}
