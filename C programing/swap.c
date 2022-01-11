#include<stdio.h>
void main()
{
	int a=15,b=52,c=a;
	int *pa=&a,*pb=&b,*pc=&c;

	a=*pb;
	b=*pc;


	printf("a = %d\nb = %d",a,b);
}