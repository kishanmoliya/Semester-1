#include<stdio.h>
struct book
{  					
	char title[25];				   	  //
	char name[25];					 //
	char publication[25];			// Member declaration
	int price;					   //
}b1,b2;
void main()
{
	printf("Enter book title = ");
	scanf("%s",b1.title);

	printf("Enter book name = ");
	scanf("%s",b1.name);

	printf("Enter book publication name = ");
	scanf("%s",b1.publication);

	printf("Enter book  price = ");
	scanf("%d",&b1.price);

	printf("Book title  = %s\n",b1.title);
	printf("Book name  = %s\n",b1.name);
	printf("Book publication  = %s\n",b1.publication);
	printf("Book price = %d",b1.price);
}