#include<stdio.h>
void main()
{
    int x,n;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    printf("Odd number is\n");

    for(x=1;x<=n && x%2!=0;x+=2)
    {
        printf("%d\n",x);
    }
}