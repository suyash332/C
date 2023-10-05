#include<stdio.h>
#include<stdlib.h>

void main()
{
    int rollnum,i;
    char name[20];
    float marks;

    FILE *fptr;

    fptr=fopen("myfile.txt","w");

    if(fptr==NULL)
    {
        printf("Error in creating file !");
        exit(1);
    }
    printf("Enter Data for 3 Students \n");
    for(i=0;i<3;i++)
    {
        printf("Enter Roll Num:");
        scanf("%d",&rollnum);
        printf("Enter Name");
        scanf("%d",&name);
        printf("Enter Marks");
        scanf("%d",&marks);

        fprintf(fptr,"%d\t",rollnum);
        fprintf(fptr,"%s\t",name);
        fprintf("fprt","%f\n",marks);


    }
    printf("Wrinting File Done,Closing File1!\n ");
    fclose();



}

