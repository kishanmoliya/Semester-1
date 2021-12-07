#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	
	printf("Enter the value of celsius = ");
	scanf ("%f",&celsius);
	
	fahrenheit=(celsius*1.8)+32;
	
	printf("fahrenheit is %f",fahrenheit);
	return 0;
}
