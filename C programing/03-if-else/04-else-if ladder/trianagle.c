#include<stdio.h>
void main()
{
    int x,y,z,a,b,c;

    printf("Enter the value of x = ");
    scanf("%d",&x);

    printf("Enter the value of y = ");
    scanf("%d",&y);

    printf("Enter the value of z = ");
    scanf("%d",&z);

    a=x*x;
    b=y*y;
    c=z*z;

    if(x==y && y==z)
    {
        printf("This triangle is eqilaterl");
    }
    else if((x==y && x!=z) || (y==z && y!=x) || (x==z && x!=z))
    {
        printf("This triangle is isosceles");
    }
    else if(a+b==c || b+c==a || c+a==b)
    {
        printf("This triangle is right angle triangle");
    }
    else
    {
        printf("This triangle is scalen");
    }
} 

