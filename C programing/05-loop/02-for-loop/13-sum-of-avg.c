#include<stdio.h>
 void main()
 {
 	float n,i,sum,ave,m;

 	printf("Enter n = ");
 	scanf("%f",&n);

 	for(i=1,sum=0,ave=0;i<=n;i++)
 	{
 		sum=sum+i;
        ave=ave+1;
 	}
 	printf("add = %f\n",sum);
    m=sum/ave;
    printf("average = %f",m); 
 }