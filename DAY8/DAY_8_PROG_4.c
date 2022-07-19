/*Realize a function which has 2 arguments and 1 return value. 
Argument 1 is Byte value, Argument 2 is bit position. 
Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value*/


#include<stdio.h>
int flip_bit(int num,int bitpos);                           //function declaration
int main()
{
    int num,bitpos,i,z;                                     //declaration of variables
loop: 
    printf("enter the number:\n");
    scanf("%d",&num);                                       //reading input value(number)
    printf("enter the bit position:\n");
    scanf("%d",&bitpos);                                    //reading bit position
    printf("byte value for given number = %d - ",num);
    for(i=7;i>=0;i--)                                       //loop for printing the binary value
    printf("%d",(num>>i)&1);                                //printing the binary value before complementing(flip) the given bit
    printf("\n");
    if((num<=255)&&(bitpos<=7))                             //checking the number and bit postion
    {
    z=flip_bit(num,bitpos);                                 //function call and storing the z after complementing(flip) the given bit
    printf("byte value after flipped = %d - ",z);
    for(i=7;i>=0;i--)                                       //loop for printing the binary value
    printf("%d",(z>>i)&1);                                  //printing the binary value after complementing(flip) the given bit 
    }
    else
    {
    printf("Byte value must less than 256(0 to 255)and bit value must be less than 8 (0 to 7)\n");
    goto loop;
    }
}
int flip_bit(int num,int bitpos)                            //function definition
{
    num=((1<<bitpos)^num);                                  //logic for flip the bit in a given bit position
    return num;                                             //returning to num
}
