#include<stdio.h>
void main()
{
    int x,y,i,j,z;

    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);

    for(i=x;i<=y;i++)
    {
        z=0;
        for(j=2;j<i-1;j++)
        {
            if(i%j==0)
            {
                z=z+1;
            }
        }
        if(z==0)
        {
            printf("prime numbre is = %d\n",i);
        }
    }
}
