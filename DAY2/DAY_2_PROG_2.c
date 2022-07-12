#include<stdio.h>
int main()
{
    int num,i=32,bin;
    printf("enter the two digit ID:\n");
    scanf("%d",&num);
    if((num>9)&&(num<100))
    {
loop:
    if(i>=0)
    {
        bin=((num>>i)&1);
        printf("%d",bin);
        i--;
        goto loop;
    }
    }
    else
    printf("entered ID is not two digit number");
}
