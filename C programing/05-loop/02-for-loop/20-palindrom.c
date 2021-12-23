#include<stdio.h>
void main()
{
    int n,q,rem,result;
    printf("Enter the value of n = ");
    scanf("%d",&n);
        
    for(result=0,q=n;q!=0;q=q/10)
    {
        rem=q%10;
        result= result*10+rem;
    }
    if(result==n)
    {
        printf("Number is palindrom");          //palindrom=(121=121),(racecar=racecar)
    }
    else
    {
        printf("No! it's not palindrom number");
    }
}