// => OUTPUT
//     1
//    A B
//   2 3 4
//  C D E F

#include<stdio.h>
void main()
{
    int n,i,j,k;
                                                            
    printf("Enter the value of n = ");                        
    scanf("%d",&n);                                           
                                                            
    for(i=1;i<=n;i++)                                         
    {                                                         
        for(j=i;j<n;j++)                               
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}