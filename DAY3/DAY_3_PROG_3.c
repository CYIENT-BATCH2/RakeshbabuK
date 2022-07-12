#include<stdio.h>
int main()
{
    int number,num,rem,rev=0;
loop:
    printf("enter the 3 digit number:\n");
    scanf("%d",&number);
    if((number>99)&&(number<1000))
    {
    num=number;
loop1:
    if(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
        goto loop1;
    }
    printf("reverse = %d\n",rev);
    }
    else
    {
        printf("enter 3 digit number only\n");
        goto loop;
    }
}
