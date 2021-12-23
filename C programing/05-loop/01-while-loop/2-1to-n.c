#include<stdio.h>
void main()
{
    int x=1,n;

    printf("How many number you need to print\nPlease enter number = ");
    scanf("%d",&n);

    while(x<=n)
    {
    printf("%d\n",x);
    x++;
    }
}