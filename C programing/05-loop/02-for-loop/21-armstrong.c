#include <stdio.h>
void main()
{
	int x,y,n,arm;

	printf("Enter the value of n = ");
	scanf("%d",&n);

	for(arm=0,x=n;n>0;n=n/10)
	{
		y=n%10;
		arm=(y*y*y)+arm;
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