#include<stdio.h>
void main()
{
    int x,y,i,j;

    printf("How many row you got = ");
    scanf("%d",&x);
    printf("Home many colum you got = ");
    scanf("%d",&y);

    int mat[x][y];

    printf("Enter the row and colum elements: \n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("row%d, colum %d = ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix elements: \n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");       
    }
    printf("Transpose Matrix elements: \n");
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            printf("%d",mat[j][i]);
        }
        printf("\n");
    }
}