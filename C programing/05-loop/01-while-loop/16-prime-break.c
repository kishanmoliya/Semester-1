#include <stdio.h>
void main()
{
	int x,i=2,m=0;

	printf("Enter x = ");
	scanf("%d",&x);

	while(i<=(x-1))
	{
		if (x%i==0)
		{
			m=m+1;
			break;
		}
		i++;
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