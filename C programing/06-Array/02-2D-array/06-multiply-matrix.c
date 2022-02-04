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

    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            printf("second matrix %d row in %d colum = ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("Matrix 1 is\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2 is\n");
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    
    printf("multiplication matrix elements: \n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<z;j++)
        {
            for(k=0,m=0;k<y;k++)
            {
                m=m+(mat1[i][k]*mat2[k][j]);
            }
            printf("%d ",m);
        }
        printf("\n");
    }
}