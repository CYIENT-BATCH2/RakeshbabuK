#include<stdio.h>
int main()
{
	long int num,pos=7;
	printf("enter the number\n");
	scanf("%x",&num);
	printf("%d\n",num);
	loop:
	if(pos>=0)
	{
		printf("%ld",(num>>pos)&1);
		pos--;
		goto loop;
	}
}
