#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
    printf("the values before swapping:\n");
    printf("a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("the values after swapping:\n");
    printf("a=%d b=%d\n",a,b);
}
