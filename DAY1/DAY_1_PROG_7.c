#include<stdio.h>
int main()
{
    long int num,temp,rem,sum=0;
    printf("enter the number:");
    scanf("%ld",&num);
    temp=num;
    L1:
    rem=temp%10;
    sum=sum*10+rem;
    temp=temp/10;
    if(temp>0)
    goto L1;
    if(sum==num)
    printf("given number is palindrome:%ld\n",num);
    else
    printf("given number is not palindrome:%ld\n",num);
}
