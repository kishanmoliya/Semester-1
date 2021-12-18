#include<stdio.h>
void main()
{
    int no,x;

    printf("Enter the number = ");
    scanf("%d",&no);

    x=no%10;

    if(x%2==0)
    {
        printf("This number is even");
    }
    else
    {
        printf("This number is odd");
    }
}