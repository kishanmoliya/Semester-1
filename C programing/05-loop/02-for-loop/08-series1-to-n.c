#include<stdio.h>
void main()
{
    float i,sum=0,n;

    printf("Enter the value of n = ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("Sum of 1 to n = %f",sum);
}