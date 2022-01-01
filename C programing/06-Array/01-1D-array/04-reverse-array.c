#include<stdio.h>
void main()
{
    int n,i,j;
    printf("How many number you got = ");
    scanf("%d",&n);
    printf("Enter array elementes: \n");

    int array[n];

    for(i=0;i<n;i++)
    {
        printf("no %d = ",i+1);
        scanf("%d",&array[i]);
    }

    printf("Reverse array Elements: ");

     for(i=n-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
}