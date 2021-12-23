#include <stdio.h>
void main()
{
	int x,i,a=1;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		a=a*i;
	}
	printf("factorial = %d",a);
}