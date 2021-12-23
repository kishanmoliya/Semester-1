#include<stdio.h>
void main()
{
    int i=1,sum=0,n;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of 1 to n = %d",sum);
}