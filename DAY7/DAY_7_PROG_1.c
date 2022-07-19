/*program to convert a data stream from Little Endian to Big Endian*/

#include<stdio.h>
int main()
{
    unsigned int num,nib1,nib2;                        //declaring the variables
    printf("enter the hexadecimal number:");
    scanf("%X",&num);                                  //storing in variable
    printf("little endian num =%X\n",num);
    
    nib1=(num&0x0f)<<4;                                     
    nib2=(num&0xf0)>>4;                             //logic for converting little endian to big endian
    
    num=nib1|nib2;                                  //using or operation the value will be swapped
                                                    //printing the output
    printf("big endian num = %X",num);              //printing the big endian value
}
