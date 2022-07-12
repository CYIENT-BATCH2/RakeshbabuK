#include<stdio.h>
int main()
{
     long int num;
    int rem,sum=0;
    printf("enter the number:");
    scanf("%ld",&num);

   AB: 
        rem=num%10;
        sum=sum+rem;
        num/=10;
        if(num>0)
            goto AB;
    
    printf("sum=%d\n",sum);
    return 0;
}
