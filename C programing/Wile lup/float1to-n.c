#include<stdio.h>
void main()
{
    float i=1,sum=0,n;

    printf("Enter the value of n = ");
    scanf("%f",&n);

    while(i<=n)
    {
        sum=sum+(1/i);
        i++;
    }
    printf("Sum of 1 to n = %f",sum);
}