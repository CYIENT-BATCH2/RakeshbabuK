#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the n:");
    scanf("%d",&n);
    if((n%11==0)||(n%11==1))
    printf("special number:%d",n);
    else
    printf("not special number");
}
