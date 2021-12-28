#include<stdio.h>
void main()
{
	int n,i,even=0,odd=0;

	printf("How many number array you got. Enter number = ");
	scanf("%d",&n);

	int a[n];


	for(i=0;i<n;i++)
	{
		printf("Number is %d = ",i+1);
		scanf("%d",&a[i]);

		if(i%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("even %d\n",even);
	printf("odd %d\n",odd);
}