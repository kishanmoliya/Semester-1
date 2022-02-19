#include<stdio.h>
int sumofdigit(int);
int compare(int,int);

int sum(int a)
{
    int j,s;
    for(s=0;a>0;a=a/10)
    {
        j=a%10;
        s=s+j;
    }
    return s;  
}
int compare(int x,int y)
{
    if(x==y)
    {
        return -1;
    }
    else if(x>y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int sa,sb,a,b,c;

    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);

    sa=sum(a);
    sb=sum(b);

    c=compare(sa,sb);

    if(c==-1)
    {
        printf("%d",c);
    }
    else if(c==1)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}

