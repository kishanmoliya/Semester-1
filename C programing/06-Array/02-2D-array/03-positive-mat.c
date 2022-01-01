#include<stdio.h>
void main()
{
    int x,y,i,j,pos=0,neg=0,zero=0;

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
            printf("row %d, colum %d = ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix elements: \n");

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(mat[i][j]>0)
            {  
                pos++;
            }
            else if(mat[i][j]<0)
            {
                neg++;
            }
            else
            {
                zero++;
            }
        }
        printf("\n");
    }
    printf("positive = %d\n",pos);
    printf("Negative = %d\n",neg);
    printf("Zero = %d",zero);
}