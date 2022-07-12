#include<stdio.h>
int main()
{
    int n,i=7;
    printf("enter the decimal number:");
    scanf("%d",&n);
    printf("hexadecimal number=%x\n",n);
    printf("the binary value is:");
    L1:
    if((n>>i)&1)
    {
        printf("1");
    }
    else
    printf("0");
    if(i>0)
    {
        i--;
        goto L1;
    }
}
