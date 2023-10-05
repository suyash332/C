#include<stdio.h>
int m=5;

int main()
{
    extern int m;
    printf("Value of m in function main() before function call :%d\n",m);
    
    printf("Value of m in function main ater function call %d\n",m);
    function1();

}
function1()
{
    m=m+2;
    printf("Value of m in Fuction1 ():%d\n",m);

}