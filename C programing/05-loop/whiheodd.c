#include<stdio.h>
void main()
{
    int x,y,n;

    printf("Enter the value of x = ");
    scanf("%d",&x);

    printf("Enter the value of y = ");
    scanf("%d",&y);

    printf("Odd number is\n");

    n=x;
    while(n<=y)
    {
        if(n%2==0)
        {
            printf("%d\n",n);
        }
            n++;
    }
}