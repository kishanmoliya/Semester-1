#include<stdio.h>
void main()
{
    float i,n,sum=0,z;
    int j;
    printf("Enter the valuue of n = ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1,z=1;j<=i;j++)
        {
            z=z*j;
        }
        sum=sum+(1/z);
    }
    printf("Sum = %f",1+sum);
}