// => OUTPUT
//     1
//     2 3
//     4 5 6
//     7 8 9 10
   
#include<stdio.h>
void main()
{
    int n,i,j;
                                                            
    printf("Enter the value of n = ");                        
    scanf("%d",&n);                                           
                                                            
    for(i=1;i<=n;i=j)                                         
    {                                                         
        for(j=i;j<i+i;j++)                               
        {
            printf("%d",j);
        }
        printf("\n");
    }
}