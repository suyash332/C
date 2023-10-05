//WAP which calculate speed for time and distance.Speed=(distance/time)

#include<stdio.h>
void main()
{
    int speed,distance,time;

    printf("Enter the distance");
    scanf("%d",&distance);

    printf("Enter the time");
    scanf("%d",&time);

    speed = (distance/time);

    printf("when the distance is %d and time is %d then speed is %d",distance,time,speed);
    

}
