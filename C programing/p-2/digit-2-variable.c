// #include<stdio.h>
// void main()
// {
//     int a,b,suma=0,sumb=0;

//     printf("Enter the value of a or b = \n");
//     scanf("%d\n,%d",&a,&b);

//     while(a>0)
//     {
//         suma=suma+a%10;
//         a/=10;
//     }
//     while(b>0)
//     {
//         sumb=sumb+b%10;
//         b/=10;
//     }

//     if(suma>sumb)
//     printf("a is larjest\n");

//     else if(suma==sumb)
//     printf("-1\n");

//     else
//     printf("b is larjest");
// }

#include<stdio.h>
int sumofdigit(int)
int checksum(int, int)
void main()
{
    int x,y,z1,z2,check;

    printf("Enter the value of x or y = \n");
    scanf("%d\n,%d",&x,&y);

    z1=sumofdigit(x);
    z2=sumofdigit(y);

    check = checksum(z1,z2);
    printf("%d",check);
}

    int sumofdigit(int n)
    {
        int i,a,sum;
        for(i=1;n!=0;i++)
        {
            a=n%10;
            n=n/10;
            sum=sum+a;
        }
        return sum;
    }

    int checksum(int z1,int z2)
    {
        if(z1==z2)
        {
        printf("-1\n");
        }
        
        else if(z1>z2)
        {
            printf("a is larjest");
        }
        else
        {
            printf("b is larjest");
        }
    }
 