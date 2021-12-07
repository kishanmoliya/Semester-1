#include<stdio.h>
int main()
{
	float maths,computer,english,physics,chemistry,Percentage;
	
	printf("Enter your maths marks = ");
	scanf("%f",&maths);
	
	printf("Enter your computer marks = ");
	scanf("%f",&computer);
	
	printf("Enter your english marks = ");
	scanf("%f",&english);
	
	printf("Enter your physics marks = ");
	scanf("%f",&physics);
	
	printf("Enter your chemistry marks = ");
	scanf("%f",&chemistry);
	
	Percentage=(maths+computer+english+physics+chemistry)/500*100;
	
	printf("Your percentage is %f",Percentage);
	
	return 0;
}
