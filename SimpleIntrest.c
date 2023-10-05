//WAP to calculate Simple interest.

void main()
{
    int p,r,t,SI;
    printf("Enter the Principal");
    scanf("%d",&p);

    printf("Enter the Rate of Intrest");
    scanf("%d",&r);

    printf("Enter the time span");
    scanf("%d",&t);

    SI=p*r*t/100;

    printf("When the principal is %d,rate is %d and time span is %d then the simple interest is %d",p,r,t,SI);
}