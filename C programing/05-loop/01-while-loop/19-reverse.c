#include<stdio.h>
void main()
{
    int n,rem,result=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        result=(result*10)+rem;
        n=n/10;
    }
    printf("%d",result);
}