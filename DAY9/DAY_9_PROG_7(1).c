/*1)Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.*/

#include<stdio.h>
int main()
{
    int SSPSTAT;                                                    //declare the variables
    printf("Enter the hexa decimal value for SSPSTAT:");            //print the binary value for SSPSTAT
    scanf("%x",&SSPSTAT);
    printf("Binary representation SSPSTAT value:\n");               //printing the hexa decimal value of SSPSTAT
    for(int i=7;i>=0;i--)
    {
        printf("%d ",(SSPSTAT>>i)&1);
    }
    SSPSTAT=(SSPSTAT&0XA7);                                         //using bitwise and with 0xA7 to clear bits
    printf("\n");                                                   //new line
    printf("SSPSTAT value after cleared the CKE,P,S:\n");           //printing the hexa decimal value after clearing the bits
    for(int i=7;i>=0;i--)
    {
        printf("%d ",(SSPSTAT>>i)&1);                               
    }
}
