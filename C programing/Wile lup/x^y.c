#include<stdio.h>
void main()
{
    int i=1,multi=1,x,y;

    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);

    while(i<=y)
    {
        multi=multi*x;
        i++;
    }
    printf("x^y of 1 to n = %d",multi);
}