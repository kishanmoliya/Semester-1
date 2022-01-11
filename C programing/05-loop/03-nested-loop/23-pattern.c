// => OUTPUT
//    A B C D E
//    F G H I
//    J K L
//    M N 
//    O

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
            x++;
        }
        printf("\n");
    }
}