#include <stdio.h>
void main()
{
	int x,y,i=1,a=1;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	printf("Enter the value of y = ");
	scanf("%d",&y);

	while(i<=y)
	{
		a=a*x;
		i++;
	}
	printf("power = %d",a);
}