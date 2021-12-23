#include<stdio.h>
void main()
{
    int n,rem,result;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(result=0;n>0;n=n/10)
    {
        rem=n%10;
        result=(result*10)+rem;
    }
    printf("%d",result);
}