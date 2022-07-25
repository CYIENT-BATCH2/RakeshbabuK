/*11. Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below.
signed int G_Str_SteeringAngle_sint = -60;
unsigned char G_Msg_SteeringInformation_Byte[3u];*/



#include<stdio.h>                                                                           //header file
void SteeringInformation(signed int, unsigned char *);                                      //function prototype
int main() 
{
    //variable declaration and initailization
    signed int G_Str_SteeringAngle_sint = -60;
    unsigned char G_Msg_SteeringInformation_Byte[3];
    //print the value in the binary form 
    printf("The binary representation of G_Str_SteeringAngle_sint value : ");
    for(int i=31;i>=0;i--)
    {
        printf("%d ",(G_Str_SteeringAngle_sint>>i)&1);
    }
    SteeringInformation(G_Str_SteeringAngle_sint,G_Msg_SteeringInformation_Byte);               //funcion call
    printf("\nElements values of an array after storing steering angle value  to the G_Msg_SteeringInformation_Byte array : ");
    for(int i=0;i<3;i++)
    {
        printf("\nDecimal value is  %d and Binary form representation of element G_Msg_SteeringInformation_Byte[%d] array is :",G_Msg_SteeringInformation_Byte[i],i);
        for(int j=7;j>=0;j--)
        {
            printf("%d ",(G_Msg_SteeringInformation_Byte[i]>>j)&1);
        }
    }
    return 0;
}
void SteeringInformation(signed int str_Angle, unsigned char G_Msg_SteeringInformation_Byte[3])  //function prototype
{
   G_Msg_SteeringInformation_Byte[0] =  (str_Angle&((4-1)<<10))>>10;
   G_Msg_SteeringInformation_Byte[1] = (str_Angle&((256-1)<<2))>>2;
   G_Msg_SteeringInformation_Byte[2] = (str_Angle&(4 -1))<<6;
}
