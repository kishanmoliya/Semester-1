#include <stdio.h>
void main()
{
	int x,j,p,m;

	printf("Enter the value of x = ");
	scanf("%d",&x);
    
	for(m=x,p=0;x>0;x=x/10)
	{	
        if(x==m)
        {
            j=x%10;
            p=p+j;
        }
		if(x<10)
        {
			p=p+x;
			break;
		}
	} 
    printf("sum of digit = %d",p);
}