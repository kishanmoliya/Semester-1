#include<stdio.h>
void main()
{
    int x,y,i,j;

    printf("How many row you got = ");
    scanf("%d",&x);
    printf("Home many colum you got = ");
    scanf("%d",&y);

    int array[x][y];

    printf("Enter the Student's Roll-no. and Marks: \n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Roll-no %d Marks %d = ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Roll-no and Marks: \n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Roll-no %d Marks %d ",array[i][j]);
            printf("\n");
        }
       
    }
}