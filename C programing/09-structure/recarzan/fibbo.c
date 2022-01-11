#include<stdio.h>
int fibbo(int n)
{
	if(n==0 || n==1)
		return n;
	else
	{
		return (fibbo(n-1)+fibbo(n-2));
	}
}
void main()
	{
		int n; 
		printf("Enter the value of n = ");
		scanf("%d",&n);
		fflush(stdin);

		printf("fibbo = %d",fibbo(n));
	}