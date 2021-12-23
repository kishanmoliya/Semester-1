#include <stdio.h>
void main()
{
	int x,i,m;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	for(i=1,m=0;i<=x;i++)
	{
		if (x%i==0)
		{
			if(i<x)
            {
				m=m+i;
			}
		}
	}
	if(m==x)
    {
		printf("number is perfect");
	}
	else
    {
		printf("number is not perfect");
	}

}