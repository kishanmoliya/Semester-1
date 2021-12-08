#include<stdio.h>
void main()
{
    char ch;

    printf("Enter the character = ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("small letter");
    }
    else if(ch>'A' && ch<='Z')
   {
        printf("capital letter");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("small letter");
    }
    else
    {
        printf(" it`s special charactar");
    }

}