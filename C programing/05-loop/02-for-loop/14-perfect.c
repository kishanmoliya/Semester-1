#include <stdio.h>
void main()
{
	int x,i,m=0;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	for(i=1;i<=x;i++)
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