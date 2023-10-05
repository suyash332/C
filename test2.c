 #include<stdio.h>
 void main()
 {
    int i ,j,z,sp;
    for(i=1;i<=5;i++)
   {
        z=1;
        for(j=1;j<=i;j++)
        {
            
            printf("%d\t",z);
            z=z+1;
        }
        printf("\n");
   }

   
   for(i=1;i<=5;i++)
   {

        for(sp=5;sp>=i;sp--)
        {
            printf(" ");
        }

        for(j=1;((i*2)-1)>=j;j++)
        {
            printf("*");
        }
        printf("\n");
   }
 }


 