#include <stdio.h>
void main()
{
	int x,i,m=0;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	for(i=2;i<=(x-1);i++)
	{
		if (x%i==0)
		{
			m=m+1;
			break;
		}
	}
	if(m==0)
    {
	printf("number is prime");
    }
	else
    {
	printf("number is not prime");
	}
}