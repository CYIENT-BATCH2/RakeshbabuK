#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter the values:");
	scanf("%d",&num);
	printf("enter the pos:");
	scanf("%d",&pos);
	num=num|(1<<pos);
	printf("set a bit=%d\n",num);
	num=num&~(1<<pos);
	printf(" clear a bit=%d\n",num);
	num=num^1<<pos;
	printf(" compliment of bit=%d\n",num);
	num&(num-1)?puts("not a pow of 2"):puts("pow of 2");
}
