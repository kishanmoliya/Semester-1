#include<stdio.h>
void main()
{
    int i,sum=0,n;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("Sum and Div of 1 to n = %d",sum);
}