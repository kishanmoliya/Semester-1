#include<stdio.h>
void main()
{
    int no1,no2,x;
    printf("Enter no1 = ");
    scanf("%d",&no1);

    printf("Enter no2 = ");
    scanf("%d",&no2);

    printf(" 1=sub\n 2=sub\n 3=mult\n 4=div\n");
    printf("Enter your choic = ");
    scanf("%d",&x);

    if(x==1)
    {
        printf("Addition is = %d",no1+no2);
    }
    else if(x==2)
    {
        printf("Subctrition is = %d",no1-no2);
    }
    else if(x==3)
    {
        printf("Multiflication is = %d",no1*no2);
    }
    else if(x==4)
    {
        printf("Divition is = %d",no1/no2);
    }
    else
    {
        printf("Pleasc enter between 1 to 4 number");
    }
}