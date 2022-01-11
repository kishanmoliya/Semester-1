// => OUTPUT
//    A A A A A
//    B B B B
//    C C C
//    D D
//    E

#include<stdio.h>
void main()
{
    int n,i,j;
    char x='A';
                                                            
    printf("Enter the value of n = ");                        
    scanf("%d",&n);                                           
                                                            
    for(i=n;i>0;i--)                                         
    {                                                         
        for(j=1;j<=i;j++)                               
        {
            printf(" %c",x);
        }
        x++;
        printf("\n");
    }
}