#include<stdio.h>
int main()
{
    int num,rem,temp,rev=0;
    printf("enter the number:");
    scanf("%d",&num);
    
    if((num > 100000)&&(num<=999999))
    {
        temp=num;
         ABC:   rem = temp%10;
                {
                    if(rem==0)
                    {
                        printf("the given number includes zero\n");
                        return 1;
                    }
                    else
                    {
                        rev=rev*10+rem;
                        temp/=10;
                        if(temp != 0)
                        {
                            goto ABC;
                        }
                        printf("reversed=%d\n",rev);
                }
             }
    }
    else
    {
        printf("the given number is not a 6 digit number");
    }
}
