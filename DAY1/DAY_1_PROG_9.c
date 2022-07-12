#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two values:");
    scanf("%d%d",&a,&b);
    printf("enter c value:");
    scanf("%d",&c);
    if(a&&b) 
    {
        printf("a&&b=1\n");
    }
        else
        {
        printf("a&&b=0\n");
    }
    if(a||b)
    {
        printf("a||b=1\n");
    }
        else
        {
        printf("a||b=0\n");
    }
    if((c==0)||(c==1))
    {
        c=!c;
        printf("!c=%d\n",c);
    }
}
