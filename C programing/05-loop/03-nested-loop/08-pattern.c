// => OUTPUT
//     1
//     2 3
//     3 4 5
//     4 5 6 7 

#include<stdio.h>
void main()
{
    int n,i,j;
                                                            
    printf("Enter the value of n = ");                         
    scanf("%d",&n);                                           
                                                            
    for(i=1;i<=n;i++)                                         
    {                                                         
        for(j=i;j<i+i;j++)                               
        {
            printf(" %d",j);
        }
        printf("\n");
    }
}