#include <stdio.h>
int main()
{
    int min=1990,max=2022,i;
    i=min;
loop:    if(i<=max)
    {
        if(((i%4==0)&&(i%100!=0))||(i%400==0))
        printf("%d\n",i);
        i++;
        goto loop;
    }
}
