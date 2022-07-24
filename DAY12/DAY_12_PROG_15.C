/*Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present.
And replace the empty string array element as “CYIENT”*/

#include<stdio.h>
int main()
{
    char *a[]={"INDIA","ASIA","AFRICA","CHINA"," "};
    int size=sizeof a/sizeof(a[0]);
    int pos=0;
    printf("%d\n",size);
    int i;
    for(i=0;i<6;i++)
    {
        if(a[i]==" ")
        {
            a[i]="CYIENT\n";
            pos=i;
            printf("%s",*(a+i));
        }
    }printf("pos=%d\n",pos);
}
