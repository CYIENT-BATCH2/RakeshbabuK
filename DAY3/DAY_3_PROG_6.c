#include<stdio.h>
int main()
{
    int num,bit;
    printf("enter hexa decimal number:");
    scanf("%x",&num);
    printf("enter bit position:");
    scanf("%d",&bit);
    num=num>>bit;
    printf("%x\n",num);
}
