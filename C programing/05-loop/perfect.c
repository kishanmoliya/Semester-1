#include <stdio.h>
void main()
{
	int x,i=1,m=0;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	while(i<=x)
	{
		if (x%i==0)
		{
			if(i<x)
            {
				m=m+i;
			}
		}
		i++;
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