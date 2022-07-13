#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter the values of i and j:");
    scanf("%d %d",&i,&j);
    k=++i+j++; //i=?,j=?,k=?
    printf("k=%d i=%d j=%d\n",i,j,k);
    k=i++-++j; //i=?,j=?,k=?
    printf("k=%d i=%d j=%d\n",i,j,k);
    k=--i+j++ * i++ -j--; //i=?,j=?,k=?
    printf("k=%d i=%d j=%d\n",i,j,k);
    k=(i--+ j++); //i=?,j=?,k=?
    printf("k=%d i=%d j=%d\n",i,j,k);
}
