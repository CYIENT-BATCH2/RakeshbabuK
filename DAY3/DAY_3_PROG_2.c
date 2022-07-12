#include<stdio.h>
int main()
{
    int num,rem,cnt=0,sum=0;
    printf("enter the 5 digit number:");
    scanf("%d",&num);
    if(num>9999&&num<=99999)
    {
LOOP:   rem=num%10;
        cnt++;
        if(cnt==2||cnt==5)
        sum=sum+rem;
        num=num/10;
        if(num>0)
        goto LOOP;
        printf("sum=%d\n",sum);
    }
    else
    {
        printf("the given number is not a 5 digit:");    
    }
}
