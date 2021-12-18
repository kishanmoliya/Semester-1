#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,D,r1,r2,z;
	printf("Enter the value of a = ");
	scanf("%f",&a);
	
	printf("Enter the value of b = ");
	scanf("%f",&b);
	
	printf("Enter the value of c = ");
	scanf("%f",&c);
	
	d=(b*b)-4*a*c;
	D=sqrt(d);
	z=sqrt(-d);
	
	if(d>0)
	{
		printf("r1= %f",(-d+D)/(2*a));
		printf("r2= %f",(-d-D)/(2*a));
	}
	else if(d==0)
	{
		printf("r1=r2 = %f",-d/(2*a));
	}
	else
	{
		printf("r1 = %f\n +i =  %f\n",-b/(2*a),z/(2*a));
		printf("r2 = %f\n -i =  %f\n",-b/(2*a),z/(2*a));
	}
}
