#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c && b>a)
    {
        printf("a is heaviest weight is:%d\n",a);
    }
    if(b>c && b>a)
    {
        printf("b is heaviest weight is:%d\n",b);
    }
    if(c>a && c>b)
    {
        printf("c is heaviest weight is:%d\n",c);
    }
}
