#include<stdio.h>
void main()
{
    int x,y,i,j;

    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);

    for(i=1;i<=10;i++)
    {
        for(j=x;j<=y;j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }
}