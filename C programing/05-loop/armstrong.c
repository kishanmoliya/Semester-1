#include <stdio.h>
void main()
{
	int x,y,n,arm;

	printf("Enter the value of n = ");
	scanf("%d",&n);

	x=n;
	while(n>0)
	{
		y=n%10;
		arm=(y*y*y)+arm;
		n=n/10;
    }
   if(x==arm)
   { 
   	    printf("number is armstrong ");
   }
    
    else
    {
	    printf("number is not armstrong");
	}
}