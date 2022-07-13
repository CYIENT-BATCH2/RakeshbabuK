#include<stdio.h>
int main()
{
int i=10,j=20,m=5,k;
printf("i=%d j=%d m=%d\n",i,j,m);
k=i&j; //k=?
printf("k=%d\n",k);
k=i|j;
printf("k=%d\n",k);
k=i^j;
printf("k=%d\n",k);
k=i&&j|m&&j;
printf("k=%d\n",k);
k=i||j&m&&i;
printf("k=%d\n",k);
k=i&j|j||m;
printf("k=%d\n",k);
i=10,j=20,k=30;
printf("the final k values after modifying:\n");
k=i&&j&k;
printf("k=%d\n",k);
k=i&j|k&&i;
printf("k=%d\n",k);
k=i||j&j;
printf("k=%d\n",k);
k=i||j&(j&&k);
printf("k=%d\n",k);
}
