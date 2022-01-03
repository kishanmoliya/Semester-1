#include<stdio.h>
int prime(int a);
void main()
{
	int n,x;
  	printf("Enetr the velue of n = ");
  	scanf("%d",&n);

  	x=prime(n);

      if(x==1)
      {
        printf("Your number is prime");
      }
      else
      {
        printf("Your number is not prime");
      }

  	printf("\nvalue = %d ",x);
}

int prime(int n)
{
	int i,p=1;

	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			p=p-1;
			break;
		}
	}
	return p;
}