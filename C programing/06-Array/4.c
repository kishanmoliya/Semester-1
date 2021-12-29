#include<stdio.h>
int sum(int,int);
void main()
{
	int no1,no2,x;

	printf("Enter the value of no1 = ");
	scanf("%d",&no1);
	printf("Enter the value of no2 = ");
	scanf("%d",&no2);

	x=sum (no1,no2);

	printf("add = %d",x);
}
int sum(int no1,int no2)
{
	int add;

	add=no1+no2;

	return add;

	
}
