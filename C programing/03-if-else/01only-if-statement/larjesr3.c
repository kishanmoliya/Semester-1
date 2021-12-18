#include<stdio.h>
int main ()
{
	int no1,no2,no3;
	printf("Enter no1 = ");
	scanf("%d",&no1);
	
	printf("Enter no2 = ");
	scanf("%d",&no2);
	
	printf("Enter no3 = ");
	scanf("%d",&no3);
	
	if (no1>no2 && no1>no3)
	{
		printf("no1 is larjest");
	}
	if (no2>no1 && no2>no3)
	{
		printf("no2 is larjest");
	}
	if (no3>no1 && no3>no2)
	{
		printf("Number 3 is Larjest");
	}
}
