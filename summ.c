#include<stdio.h>
void main()
{
	int n,sum=0,i=0;

	printf("Enter the value of n = ");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	printf("Answer = %d",sum);
}