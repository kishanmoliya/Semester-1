#include<stdio.h>
int factorial(int n)
{
	if(n==1)
		return 1;
	else
	{
		return factorial(n-1)*n;
	}
}
void main()
	{
		int n;
		printf("Enter the value of n = ");
		scanf("%d",&n);

		printf("factorial = %d",factorial(n));
	}