// => OUTPUT
//          *
//        * *
//      * * *
//    * * * *

#include<stdio.h>
void main()
{
    int n,i,j,k,m;

    printf("Enter the value of  n = ");
    scanf("%d",&n);
    m=n;
    for( i=1;i<=n;i++)
    {

       for ( j = 1; j<=(m-1)*2 ; j++)
       {
           printf(" ");
       }
       m--;
       for(k=1; k<=i;k++)
       {
           printf("* ");
       }
       printf("\n");
    }
}


// #include<stdio.h>
// void main()
// {
//     int n,i,j,k;

//     printf("Enter the value of n = ");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=i;j<n;j++)
//         {
//             printf("  ");
//         }
    
//         for(k=1;k<=i;k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }