#include<stdio.h>
 void main()
 {
 	float n,i,sum=0,ave=0;

 	printf("Enter n = ");
 	scanf("%f",&n);

 	for(i=1;i<=n;i++)
 	{
 		sum=sum+i;
 	}
 	printf("Sum = %f\n",sum);
    ave=sum/n;
    printf("average = %f",ave); 
 }