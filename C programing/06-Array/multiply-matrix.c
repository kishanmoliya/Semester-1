#include<stdio.h>
void main()
{
    int x,y,z,i,j,k,m=0;

    printf("How many matrix 1 row you got  = ");
    scanf("%d",&x);
    printf("How many matrix 1 colum and matrix 2 row you got = ");
    scanf("%d",&y);
    printf("How many matrix 2 colum you got  = ");
    scanf("%d",&z);

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
            for(k=0,m=0;k<z;k++)
            {
                m=m+(mat1[i][k]*mat2[k][j]);
            }
            printf("%d ",m);
        }
        printf("\n");
    }

}