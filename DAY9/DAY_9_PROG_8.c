/*Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”*/

#include<stdio.h>
int main()
{
    int CMCON,ADCONO;                                                               //declare the variables
    printf("enter the value for CMCON and ADCONO: ");                               //read the inputs from user
    scanf("%x%x",&CMCON,&ADCONO);
    printf("Binary representation of CMCON value: ");                               //printing the binary value for CMCON 
    for(int i=7;i>=0;i--)
    {
        printf("%d ",(CMCON>>i)&1);
    }
    printf("\n");
    printf("Binary representation of the ADCONO value: ");                          //printing the binary value for ADCONO
    for(int i=7;i>=0;i--)
    {
        printf("%d ",(ADCONO>>i)&1);
    }
    ADCONO=(ADCONO&0x31)>>3;
    if(ADCONO==0x06)                                                                //using if condition which bit value is equal to 0x06 
    {
        CMCON=(CMCON<<3);
        CMCON=(CMCON<<6);
        CMCON=(CMCON<<7);
        printf("\n");
        printf("Binary representation of CMCON value after it set to 0x06: ");      
        for(int i=7;i>=0;i--)
        {
        printf("%d ",(CMCON>>i)&1);
        }
    }
    else
    printf("\n");
    {
        printf("ADCON0 value is not equal to  0x06");                               //printing whether value is not equal to 0x06
    }
}
