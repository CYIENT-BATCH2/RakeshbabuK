#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("enter the celsius:");
    scanf("%d",&celsius);
    fahrenheit=((celsius*9)/5)+32;
    printf("temperature in fahrenheit=%f\n",fahrenheit);
}
