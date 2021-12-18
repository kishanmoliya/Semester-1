#include<stdio.h>
void main()
{
    int a,b,c,x;

    printf("Enter the value of a = ");
    scanf("%d",&a);
    
    printf("Enter the value of b = ");
    scanf("%d",&b);

    printf("Enter the value of c = ");
    scanf("%d",&c);

    x=(a>b)?(a):(b);

    printf("Multifliction is = %d", x*c);
}