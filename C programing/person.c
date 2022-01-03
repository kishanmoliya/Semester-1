#include<stdio.h>
struct person
{
	char name[25];
	char date[25];
	int salary;
}p[5];
void main()
{
	int i;

	for(i=0;i<5;i++)
	{
		printf("Enter person %d name = ",i+1);
		scanf("%s",p[i].name);

		printf("Enter person %d joining date = ",i+1);
		scanf("%s",p[i].date);

		printf("Enter person %d salary = ",i+1);
		scanf("%d",&p[i].salary);
	}
	for(i=0;i<5;i++)
	{
		printf("name = %s",p[i].name);

		printf("date = %s",p[i].date);

		printf("salary = %d",p[i].salary);
	}
}