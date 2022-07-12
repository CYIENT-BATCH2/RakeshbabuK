#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,temp;
    printf("enter the values:\n");
    scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    L1:
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
        goto L1;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
        goto L1;
    }
    if(c>d)
    {
        temp=c;
        c=d;
        d=temp;
        goto L1;
    }
    if(d>e)
    {
        temp=d;
        d=e;
        e=temp;
        goto L1;
    }
    if(e>f)
    {
        temp=e;
        e=f;
        f=temp;
        goto L1;
    }
    if(f>g)
    {
        temp=f;
        f=g;
        g=temp;
        goto L1;
    }
    if(g>h)
    {
        temp=g;
        g=h;
        h=temp;
        goto L1;
    }
    if(h>i)
    {
        temp=h;
        h=i;
        i=temp;
        goto L1;
    }
    printf("%d%d%d%d%d%d%d%d%d\n",a,b,c,d,e,f,g,h,i);
}
