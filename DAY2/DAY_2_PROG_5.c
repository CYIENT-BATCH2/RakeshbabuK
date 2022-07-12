#include<stdio.h>
int main()
{
    int num;
loop:
    printf("enter an number between 1 to 26:\n");
    scanf("%d",&num);
    if((num>=1)&&(num<=26))
    printf("%d=%c",num,num+64);
    else
    goto loop;
    return 0;
}
