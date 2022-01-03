#include <stdio.h>

float interest();
void main()
{
	interest();
}
float interest()
{
	float p,r,n;

	printf("Enter amount = ");
	scanf("%f",&p);

	printf("Enter percentage = ");
	scanf("%f",&r);

	printf("Enter year = ");
	scanf("%f",&n);

	printf("Interest = %f",(p*r*n)/(100));
}