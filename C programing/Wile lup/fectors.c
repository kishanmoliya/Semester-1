#include<stdio.h>
void main()
{
	int x,i=1;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	while(i<=x)
	{
		if(x%i==0)
		{
			printf("%d\n",i);	
		}
		i++;
	}
}
