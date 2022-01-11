#include<stdio.h>
void main()
{
	char name[10],i;
	char *p=name;
	int i;

	printf("Enter the name");
	scanf("%s",name);

	for(i=0;p[i]!='\0';i++)
	{
		printf("value = %c,Address = %u\n",*(p+i),(p+i));
	}
}