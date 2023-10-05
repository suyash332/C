#include<stdio.h>
union Employee
{
    int empid;
    double contractnumber;
};
int main()
{
    int emptype;
    union Employee emp1;

    printf("The size of Employee is %d \n",sizeof(emp1));

    printf("Please say whether Emplyee is a permanent Employe(1)o or Contractual Employee(2)\n");
    scanf("%d",&emptype);
    if(emptype==1)
    {
        printf("Please Enter Employee Id for the Permanent Emplyee");
        scanf("%d",&emp1.empid);
        printf("Emplyee Id =%d",emp1.empid);
    }
    else if(emptype==2)
    {
        printf("Please Enter Employee Contract Number for Contractual Employee");
        scanf("%d",&emp1.contractnumber);
        printf("Employee ContractNumber=%d",emp1.contractnumber);
    }
    else
    {
        printf("Incorect");
    }



}