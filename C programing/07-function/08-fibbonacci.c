#include<stdio.h>
int fibbo(int n);
void  main()
{
	int y,x,n;

	printf("Enter the value of n = ");
	scanf("%d",&n);

	fibbo(n);
}

int fibbo(int n)
{
	int i,j=1,x,p=1;

	for(i=0;p<=n-2;p++)
	{
		if(p==1)
		{
			printf("%d %d ",i,j);
		}

		x=i+j;
		i=j;
		j=x;
		printf("%d ",x);
	}
}