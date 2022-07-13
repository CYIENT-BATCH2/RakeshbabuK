#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("enter the values of i and j:");
    scanf("%d %d",&i,&j);
    k=i&&j; 
    printf("k=%d i=%d j=%d\n",k,i,j);
    k=i||j;
    printf("k=%d i=%d j=%d\n",k,i,j);

    k=!i;
    printf("k=%d i=%d j=%d\n",k,i,j);
    
    k=i&&(j=20);
    printf("k=%d i=%d j=%d\n",k,i,j);
    
    k=i||(j=20);
    printf("k=%d i=%d j=%d\n",k,i,j);
    
    l=i||(j=20)&&k;
    printf("k=%d i=%d j=%d l=%d\n",k,i,j,l);
    
    l=i&&j||j&&k;
    printf("k=%d i=%d j=%d l=%d\n",k,i,j,l);
    
    l=i||j&&i||k;
    printf("k=%d i=%d j=%d l=%d\n",k,i,j,l);
}
