/*2.Finding out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55*/

#include<stdio.h>
int main()
{
    int SSPSTAT,BF=0,UA=0,SMP=0;                                    //declaring the variables
    printf("Enter the hexa value for SSPSTAT Register:");           //print the binary value of SSPSTAT
    scanf("%x",&SSPSTAT);
    printf("Binary representation of SPST Value: ");                //printing the binary value of SSPSTAT
    for(int i=7;i>=0;i--)
    {
        printf("%d ",(SSPSTAT>>i)&1);
    }
    printf("\n");                                                   //new line
    if(SSPSTAT&0x83)                                                //using bitwise AND operation with 0x83 will get UA,BF,SMP bits
    {
        UA=(SSPSTAT&0x01);
        printf("UA value is : %d\n",UA);                            //printing the UA bit
        SMP=(SSPSTAT&0x02)>>1;                          
        printf("SMP value is : %d\n",SMP);                          //printing the SMP bit
        BF=(SSPSTAT&0x80)>>7;
        printf("BF value is : %d\n",BF);                            //printing the BF bit
    }
}
