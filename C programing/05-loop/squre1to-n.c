#include<stdio.h>
void main()
{
    int i=1,sum=0,n,x;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    while(i<=n)
    {
        x=i*i;
        sum=sum+x;
        i++;
    }
    printf("Squre of 1 to n = %d",sum);
}