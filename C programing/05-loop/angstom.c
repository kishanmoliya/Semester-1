#include <stdio.h>
void main()
{
	int x,y,p=0,t=0,z;

	printf("Enter the value of x = ");
	scanf("%d",&x);

	z=x;
	while(x>0)
	{
		y=x%10;
		x=x/10;

		t=y*y*y;
		p=p+t;
		if(x<10)
        {
			x=x*x*x;
			p=p+x;
			break;
		}

    }
   if(p==z)
   { 
   	    printf("number is armstrong ");
   }
    
    else
    {
	    printf("number is not armstrong");
	}
}