#include<stdio.h>
int main()
{
	float km,m,f,i,cm;
	
	printf("Enter the value of km = ");
	scanf("%f",&km);
	
	m=1000*km;
	printf("meter is = %f \n",m);
	
	f=3280.84*km;
	printf("feet is = %f \n",f);
	
	i=39370.1*km;
	printf("inches = %f \n",i);
	
	cm=100000*km;
	printf("centimeters = %f",cm);
	
	return 0; 
}
