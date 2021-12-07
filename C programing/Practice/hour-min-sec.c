#include<stdio.h>
void main()
{
    int sec,min,hour,x,y;

    printf("Enter the value of sec = ");
    scanf("%d",&sec);

    hour=sec/3600;
    x=sec%3600;
    min=x/60;
    y=x%60;
    sec=y;

    printf("%d Hour, %d min, %d sec",hour,min,sec);
}