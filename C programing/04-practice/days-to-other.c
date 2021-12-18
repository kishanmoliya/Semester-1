#include<stdio.h>
void main()
{
    int year,week,days,y,x;

    printf("Enter the value of days = ");
    scanf("%d",&days);

    year=days/365;
    x=days%365;
    week=x/7;
    y=x%7;
    days=y;

    printf("%d year, %d week, %d days",year,week,days);
}