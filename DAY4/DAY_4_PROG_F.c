#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter the values of i and j:");
    scanf("%d %d",&i,&j);
    k=i<<j;
    printf("k=%d\n",k);
    k=i>>j;
    printf("k=%d\n",k);
    k=(i&&j)<<j;
    printf("k=%d\n",k);
    k=(i||j)>>j;
    printf("k=%d\n",k);
    k=(i&j)<<i;
    printf("k=%d\n",k);
    k=(i||j&&i);
    printf("k=%d\n",k);
}
