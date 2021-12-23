#include<stdio.h>
 void main()
 {
 	float n,i=1,sum=0,ave=0,m;

 	printf("Enter n = ");
 	scanf("%f",&n);

 	while(i<=n)
 	{
 		sum=sum+i;
        ave=ave+1;
 		i++;
 	}
 	printf("add = %f\n",sum);
    m=sum/ave;
    printf("average = %f",m); 
 }