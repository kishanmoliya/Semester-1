#include<stdio.h>
void main()
{
    int i,multi=1,x,y;

    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);

    for(i=1;i<=y;i++)
    {
        multi=multi*x;
    }
    printf("x^y of 1 to n = %d",multi);
}