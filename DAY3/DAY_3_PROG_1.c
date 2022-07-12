#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,isum,iavg,dsum;
    float i,j,k,l,m,n,o,fsum,favg,davg;
    a=b=c=d=5;
    e=f=g=h=6;
    i=j=k=l=12.12;
    m=n=o=13.13;
    isum=a+b+c+d+e+f+g+h;
    iavg=isum/8;
    printf("sum of integers=%d\n",isum);
    printf("average of integers=%d\n",iavg);
    printf("\n");
    fsum=i+j+k+l+m+n+o;
    favg=fsum/7;
    printf("sum of floats=%.2f\n",fsum);
    printf("average of floats=%.2f\n",favg);
    printf("\n");
    dsum=isum/fsum;
    printf("division of both sums=%d\n",dsum);
    printf("\n");
    davg=iavg/favg;
    printf("average of both floats=%.2f\n",davg);
    printf("\n");
    printf("after converting float values into integers-->");
    printf("i=%d j=%d k=%d l=%d m=%d n=%d o=%d\t",(int)i,(int)j,(int)k,(int)l,(int)m,(int)n,(int)o);
}
