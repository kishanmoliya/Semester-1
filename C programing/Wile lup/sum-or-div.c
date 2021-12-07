#include<stdio.h>
void main()
{
    int i=1,sum=0,n;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
        i++;
    }
    printf("Sum and Div of 1 to n = %d",sum);
}