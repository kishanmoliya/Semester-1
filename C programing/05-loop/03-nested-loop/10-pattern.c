// => OUTPUT
//     1
//     0 1
//     1 0 1
//     0 1 0 1

#include<stdio.h>
void main()
{
    int n,i,j;
                                                            
    printf("Enter the value of n = ");                        
    scanf("%d",&n);                                           
                                                            
    for(i=1;i<=n;i++)                                         
    {                                                         
        for(j=i;j>=1;j--)                               
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
}