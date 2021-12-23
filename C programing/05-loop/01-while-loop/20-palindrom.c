#include<stdio.h>
void main()
{
    int n,q,rem,result=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    q=n;

    while(q!=0)
    {
        rem=q%10;
        result= result*10+rem;
        q=q/10;
    }
    if(result==n)
    {
        printf("Number is palindrom");     //palindrom=(121=121),(racecar=racecar)
    }
    else
    {
        printf("No! it's not palindrom number");
    }
}