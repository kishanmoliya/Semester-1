#include<stdio.h>
void main()
{
    int x,n;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    printf("Odd number is\n");

    for(x=1;x<=n;x++)
    {
        if(x%2!=0)
        {
        printf("%d\n",x);
        }
    }
}