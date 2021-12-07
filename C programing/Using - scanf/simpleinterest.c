#include<stdio.h>

int main()
{
	float principal,rate,month;
	printf("Enter the value of principal = ");
	scanf("%f", &principal);
	
	printf("Enter the value of rate = ");
	scanf("%f", &rate);
	
	printf("Enter the value of month = ");
	scanf("%f", &month);
	
	float simpleinterest = principal * rate * month/100;
	printf("The value of simpleinterest is %f", simpleinterest);
	
	return 0;
}
