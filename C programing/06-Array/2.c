#include<stdio.h>
int sum();
void main()
{
	int x;

	x=sum ();

	printf("add = %d",x);
}
int sum()
{
	int no1,no2,add;

	printf("Enter the value of no1 = ");
	scanf("%d",&no1);
	printf("Enter the value of no2 = ");
	scanf("%d",&no2);

	add=no1+no2;

	return add;
}
