#include <stdio.h>
void main()
{
	int x,i=1,a=1;

	printf("enter x = ");
	scanf("%d",&x);

	while(i<=x)
	{
		a=a*i;
		i++;
	}

	printf("factorial = %d",a);

}