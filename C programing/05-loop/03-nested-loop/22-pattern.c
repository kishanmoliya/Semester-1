// => OUTPUT
//    A B C D E
//    A B C D
//    A B C 
//    A B 
//    A

#include<stdio.h>
void main()
{
    int n,i,j;
    char x;
                                                            
    printf("Enter the value of n = ");                        
    scanf("%d",&n);                                           
                                                            
    for(i=n;i>0;i--)                                         
    {  
        x='A';                                                       
        for(j=1;j<=i;j++)                               
        {
            printf(" %c",x);
            x++;
        }
        printf("\n");
    }
}