#include<stdio.h>
void main()
{
    int year;

    printf("Enter the year = ");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0)
    {
        printf("This is a leap year");
    }
    else if(year%400==0)
    {
        printf("This is leap year");
    }
    else{
        printf("This ia not leap year");
    }

}