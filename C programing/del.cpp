// => OUTPUT
//     1
//     2 3
//     4 5 6
//     7 8 9 10
   
#include<stdio.h>
void main()
{
    int n,i,j,k;
                                                            
    printf("Enter the value of n = ");                        
    scanf("%d",&n);                                           
                                                            
    for(i=1;k<=n;i=j)                                         
    {                                                         
        for(j=i;j<i+k;j++)                               
        {
            printf("%d",j);
        }
        printf("\n");
        k++;
    }
}
