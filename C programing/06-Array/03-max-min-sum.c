#include<stdio.h>
void main()
{
	int n,i,j,sum=0,x,y,avg=0;

	printf("Enter no = ");
	scanf("%d",&n);

	int a[n];

	for(i=0;i<n;i++)
	{
		printf("Number is %d = ",i+1);
		scanf("%d",&a[i]);

		sum=sum+a[i];
	}
	x=a[0];
	y=a[0];
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>x)
			{
				x=a[j];
			}
			if(a[j]<y)
			{
				y=a[j];
			}
		}
		avg=sum/n;

		printf("max = %d\n",x);
		printf("min = %d\n",y);
		printf("avg = %d\n",avg);
		printf("sum = %d\n",sum);
	}
}