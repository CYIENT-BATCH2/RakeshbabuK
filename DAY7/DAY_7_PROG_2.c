//code to swap even bits with odd bits in unsigned long variable.

#include <stdio.h>
int main()
{
    //declaration
    unsigned long int num,v1,v2,a;
    
    //Reading the inputs from the user
    printf("Enter the number:");  
    scanf("%ld",&num);
    printf("The binary representation of number is:\n");
    
    for(int i=63;i>=0;i--)
    {
        printf("%ld",(num>>i)&1);
    }
    printf("\n");
    
    //Using this operation swap the even with odd values
    v1=((num&0xAAAAAAAAAAAAAAAA)>>1);
    v2=((num&0x5555555555555555)<<1);
    a=(v1|v2);
    
    //Displaying the values after swapping
    printf("The binary representation of number after swapping even with odd bit is:\n");
    for(int i=63;i>=0;i--)
    {
        printf("%ld",((a>>i)&1));
    }
    return 0;
}
