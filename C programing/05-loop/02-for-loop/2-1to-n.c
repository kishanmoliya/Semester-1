#include<stdio.h>
void main()
{
    int x,n;

    printf("How many number you need to print\nPlease enter number = ");
    scanf("%d",&n);

    for(x=1;x<=n;x++)
    {
    printf("%d\n",x);
    }
}