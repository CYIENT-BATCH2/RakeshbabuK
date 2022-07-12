#include<stdio.h>
int main()
{
    int i,j,tickets,count=0,result=0;
    printf("enter the tickets:");
    scanf("%d",&tickets);
    for(j=3;j<=tickets;j++)
    {
    i=j;
    while(i>0)
    {
    if(i%10==3)
    count++;
    i=i/10;
    }
    if(count>=1)
    {
        result++;
    }
    count=0;
    }
    printf("lucky tickets are:%d\n",result);
}
