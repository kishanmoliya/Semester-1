#include<stdio.h>
void main()
{
    int x,y,i,j;

    printf("How many row you got = ");
    scanf("%d",&x);
    printf("Home many colum you got = ");
    scanf("%d",&y);

    int mat1[x][y],mat2[x][y];

    printf("Enter the row and colum elements: \n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("first matrix  row %d  colum %d= ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("second matrix %d row in %d colum = ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    
    printf("Matrix elements: \n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
}