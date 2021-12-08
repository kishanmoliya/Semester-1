#include<stdio.h>
void main()
{
	int x,i=1,a=1;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	while(i<=x)
	{
		a=a*i;
		i++;
	}
	printf("Fectoria is = %d",a);
}