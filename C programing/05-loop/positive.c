#include<stdio.h>
void main()
{
	int n,i,pos=0,neg=0,zero=0;

	printf("Enter the value of n = ");
	scanf("%d",&n);

	int a[n];


	for(i=0;i<n;i++)
	{
		printf("Enter %d no = ",i+1);
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			pos++;
		}
		else if(a[i]<0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
	printf("positive %d\n",pos);
	printf("Negative %d\n",neg);
	printf("Zero %d",zero);
}