#include<stdio.h>
void main()
{
    printf("\nFirst Call to Function1:");
    function1();

    printf("\nsecond call to function1:");
    function1();

    printf("\nFirst call to function2");
    function2();

    printf("\nThird call to function1:");
    function1();


}
function1()
{
    static int m=10;
    printf("The value of function1()%d\n",m);
    m=m+1;
    printf("The value of Function()%d\n",m);

}
function2()
{
    static int m=100;
    printf("The value of Function()%d\n",m);
    m=m*2;
    printf("The value of Function()%d\n",m);
}

