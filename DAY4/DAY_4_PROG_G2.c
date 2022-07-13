#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
    printf("the values before swapping:\n");
    printf("a=%d b=%d\n",a,b);
    a^=b^=a^=b;
    printf("the values after swapping:\n");
    printf("a=%d b=%d\n",a,b);
}
