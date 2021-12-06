#include<stdio.h>
void main()
{
	float n,sum=0,i=1;

	printf("Enter the value of n = ");
	scanf("%f",&n);

	while(i<=n)
	{
		sum=sum+(1/i);
		i++;
	}
	printf("sum = %f",sum);
}