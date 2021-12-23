#include<stdio.h>
void main()
{
    int no1,no2,x;

    printf("Enter the value of no1 = ");
    scanf("%d",&no1);

    printf("Enter the value of no2 = ");
    scanf("%d",&no2);

    for(x=no1;x<=no2;x++)
    {
        if(x%2==0 && x%3!=0)
        {
            printf("%d\n",x);
        }
    }
}