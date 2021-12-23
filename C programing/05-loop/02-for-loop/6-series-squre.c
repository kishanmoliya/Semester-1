#include<stdio.h>
void main()
{
    int i,sum=0,n,x;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        x=i*i;
        sum=sum+x;
    }
    printf("Squre of 1 to n = %d",sum);
}