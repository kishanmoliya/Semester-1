#include<stdio.h>
void main()
{
    float maths,computer,english,physics,chemistry,x;
	
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
	
	x=(maths+computer+english+physics+chemistry)/500*100;
	
	printf("Your percentage is %f\n",x);

    if(x<35)
    {
        printf("You are fail");
    }
    else if(x>35 && x<=45)
    {
        printf("You are pass");
    }
    else if(x>45 && x<=60)
    {
        printf("You are pass and second class");
    }
    else if(x>60 && x<=70)
    {
        printf("You are pass and first class");
    }
    else
    {
        printf("Distinction");
    }
}