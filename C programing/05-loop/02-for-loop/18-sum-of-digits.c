#include <stdio.h>
void main()
{
	int x,y,p;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	for(p=0;x>0;x=x/10)
	{
		y=x%10;
		p=p+y;
	} 
    printf("sum of digit = %d",p);
}