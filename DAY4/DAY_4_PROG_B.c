#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the value of X:");
    scanf("%d",&x);
    printf("enter the value of Y:");
    scanf("%d",&y);
    z=x<y;
    printf("z=%d\n",z);
    z=x>y;
    printf("z=%d\n",z);
    z=x<=y;
    printf("z=%d\n",z);
    z=(x*x-y)>(y*y-x);
    printf("z=%d\n",z);
    z=(x*x*x)<(y*x*x);
    printf("z=%d\n",z);
    z=((x*y)!=(y*x));
    printf("z=%d\n",z);
    z=((x*y)==(y*x));
    printf("z=%d\n",z);
}
