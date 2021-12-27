#include<stdio.h>
void main()
{
    int x=1,n;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    printf("Odd number is\n");

    while(x<=n)
    {
        if(x%2!=0)
        {
            printf("%d\n",x);
        }
            x++;
    }
}