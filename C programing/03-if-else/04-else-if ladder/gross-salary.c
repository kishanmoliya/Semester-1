#include<stdio.h>
void main()
{
    float bs;

    printf("Enter basic salary = ");
    scanf("%f",&bs);

    if(bs>=10000 && bs<20000)
    {
        printf("gross salary = %f",bs+(bs*0.20)+(bs*0.80));
    }
    else if(bs>=20000 && bs<30000)
    {
        printf("gross salary = %f",bs+(bs*0.25)+(bs*0.90));
    }
    else if(bs>=30000)
    {
        printf("gross salary = %f",bs+(bs*0.30)+(bs*0.95));
    }
    else
    {
        printf("pleace enter bs<=10000");
    }

}