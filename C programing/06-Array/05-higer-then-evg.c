#include<stdio.h>
void main()
{
    int n,i,j,x,sum=0;
    float avg;

    printf("How many number array you got. Enter number = ");
	scanf("%d",&n);

    int array[n];

    for(i=0;i<n;i++)
    {
        printf("Number %d is = ",i+1);
        scanf("%d",&array[i]);

        sum=sum+array[i];
    }

    avg=sum/n;
    printf("avg = %f\n",avg);

    for(j=0;j<n;j++)
    {
        if(array[j]>avg)
        {
            printf("Higer then average = %d\n",array[j]);
        }
    }   
}