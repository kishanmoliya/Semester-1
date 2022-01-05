#include<stdio.h>
void main()
{
	int a=15,b=52;
	int *pa,*pb;
	pa=&a;
	pb=&b;

	printf("address = %d\n",*pa+*pb);
}