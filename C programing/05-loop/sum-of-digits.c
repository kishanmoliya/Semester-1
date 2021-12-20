#include <stdio.h>
void main()
{
	int x,y,p=0;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	while(x>0)
	{
		y=x%10;
		x=x/10;

		p=p+y;
		if(x<10)
        {
			p=p+x;
			break;
		}

	} 
    printf("sum of digit = %d",p);
}