#include<stdio.h>
void main()
{
    int x;
    printf(" Please enter your choice = ");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31-days");
        break;

        case 2:
        printf("28-days");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("30-days");
        break;

        default:
        printf("Please enter between 1 to 12");
    }
}