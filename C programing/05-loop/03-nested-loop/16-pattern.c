// => OUTPUT
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include<stdio.h>
void main()
{
    int n,i,j,k,m;
                                                            
    printf("Enter the value of n = ");                        
    scanf("%d",&n); 

    m=n;                                                                                               
    for(i=0;i<n;i++)                                         
    {                                                         
        for(j=1;j<=2*i;j++)                               
        {
            printf(" ");
        }
        for(k=1;k<=(2*m)-1;k++)
        {
            printf("* ");
        }
        m--;
        printf("\n");
    }
}