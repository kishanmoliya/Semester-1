#include<stdio.h>
void main()
{
	int i,n,a=0;
	i=1;

	printf("Enter the value of n");
	scanf("%d",&n);

	while(i<=n)
	{
		a=a+i;
		i++;
	}
	printf("sum = %d",a);
}