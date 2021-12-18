#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter the value of a = ");
    scanf("%d",&a);
    
    printf("Enter the value of b = ");
    scanf("%d",&b);

    printf("Enter the value of c = ");
    scanf("%d",&c);

    (a>b && a>c)?((b>a)?(printf("b is larjest")):(printf("a is larjest"))):((b>c)?(printf("b is larjest")):(printf("c is larjest")));
}