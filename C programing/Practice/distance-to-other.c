#include<stdio.h>
void main()
{
    float km,m,f,i,cm;

    printf("Enter the value of km = ");
    scanf("%f",&km);

    m=1000*km;
    printf("Meter is = %f\n",m);

    f=3280.84*km;
    printf("Feet is = %f\n",f);

    i=39370.1*km;
    printf("Inches is = %f\n",i);

    cm=100000*km;
    printf("centimeter is = %f\n",cm);
}