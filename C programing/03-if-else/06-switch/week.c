#include<stdio.h>
void main()
{
    int x;
    printf(" Please enter your choice = ");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thrusday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Seturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Please enter between 1to7");
    }
}