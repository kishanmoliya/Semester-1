#include <stdio.h>

float sum();
void main()
{
	int x;
	x = sum();

	printf("sum = %d",x);
}
float sum()
{
	float n,i,z;

	printf("Enter  the value of n = ");
	scanf("%f",&n);

	for(i=1;i<=n;i++)
	{
		z=z+i;
	}
	return z;
}