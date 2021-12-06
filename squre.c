#include<stdio.h>
void main()
{
	int i=1,n,a=0,b;

	printf("Enter the value of n");
	scanf("%d",&n);

	while(i<=n)
	{
		b=i*i;
		a=a+b;
		i++;
	}
	printf("Squre = %d",a);
}