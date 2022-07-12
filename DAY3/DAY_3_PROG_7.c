#include<stdio.h>
int main()
{
    int year,age,month;
    float yrd,md;
    printf("enter the year:");
    scanf("%d",&year);
    printf("enter the month:");
    scanf("%d",&month);
    yrd=(2022-year)*12;
    md=(7-month);
    age=(yrd-md)/12;
    printf("the person is %d years old\n",age);
}
