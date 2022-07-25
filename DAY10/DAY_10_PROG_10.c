/*10. Write a function to store "G_Eng_EngineTemperature_uchar" and "G_Eng_EngineRpm_uint" into " G_Msg_EngineInformation_Byte[5u]" as shown below.
unsigned char G_Eng_EngineTemperature_uchar = 50u ;
unsigned int G_Eng_EngineRpm_uint = 1000u;
unsigned char G_Msg_EngineInformation_Byte[5u];*/




#include<stdio.h>
int main()
{
    int bit,i,res;
    unsigned char G_Msg_EngineInformation_Byte[5u];
    unsigned int G_Eng_EngineRpm_uint = 1000u;
    unsigned char G_Eng_EngineTemperature_uchar = 50u ;
// binary for the Engine RPM
   printf("Binary for G_Eng_EngineRpm\n");
     for( bit=32;bit>=0;bit--)
     {
         printf("%d",(G_Eng_EngineRpm_uint>>bit)&1);
     }
     printf("\n");
       printf("Transfer the bit 9 to bit 12---> bit 0 to bit 3\n");
      G_Msg_EngineInformation_Byte[0]=512>>9; // Transfer the Bit 9  to Bit 12  to position Bit 0 to Bit 3
       printf("Transfer the bit 1 to bit 8 ---> bit 0 to bit 7\n");
       G_Msg_EngineInformation_Byte[1]=488>>1; // Transfer the Bit 1  to Bit 8  to position Bit 0 to Bit 7
        printf("Transfer the bit 0 --->  bit 7\n");
       G_Msg_EngineInformation_Byte[2]=0<<7;
        G_Msg_EngineInformation_Byte[3]=50;
    
    for(i=0;i<=4;i++)
    {
        printf("%d\n",G_Msg_EngineInformation_Byte[i]);
    }
  return 0; 
}
