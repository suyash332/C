/*WAP to accept Cost Price from user and ask whether the user is a student or not. If the user
is student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If
user is not student and cost price is greater 500 then give discount of 8% ELSE discount will be
2%. (Take all inputs from USER)*/

#include <stdio.h>
void main()
{
    int costprice;
    char user[10];

    printf("What is the proffession of user ");
    scanf("%s", &user);

    printf("ehat is thev costprice");
    scanf("%d", &costprice);

    if (user == 'stud')
    {

        if (costprice > 500)
        {
            printf("the costprice%d is grater than 500 the given discount is forn user is 10%",costprice);
        }
        else
        {
            printf("the costprice%d is less than 500 the given discount is forn user is 5%",costprice);
        }
    }
    else
    {
        if (costprice > 500)
        {
            printf("the costprice%d is grater than 500 the given discount is forn user is 8%",costprice);
        }
        else
        {
            printf("the costprice%d is less than 500 the given discount is forn user is 2%",costprice);
        }
    }
}