#include<stdio.h>
int main()
{
	float fahrenheit,celsius;

	printf("Enter the value of fahrenheit = ");
	scanf ("%f",&fahrenheit);
	
	celsius=(fahrenheit-32.0)*(5.0)/9.0;
	
	printf("celsius is %f",celsius);
	return 0;
}
