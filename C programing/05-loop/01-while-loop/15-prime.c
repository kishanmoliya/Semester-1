#include <stdio.h>
void main()
{
	int x,i=2,m=0;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	while(i<=(x-1))
	{
		if (x%i==0)
		{
			m=m+1;
		}
		i++;
	}
	flag:
	if(m==0)
    {
	    printf("number is prime");
    }

	else
    {
	    printf("number is not prime");
    }
}



