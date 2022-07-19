/*program in C to sort an array using Pointer*/


#include<stdio.h>
int main()
{
    int a[5]={25,45,89,15,82};
    int n,temp,*p=a;                                            //declare the variables
    printf("The given elements in the array:\n");
    for(int i=0;i<5;i++)                                        //loop for scaning the given array elements
    {
        printf("%d\t",*(p+i));
    }
    printf("\n");
    printf("The elements in the array after sorting:\n");
    
    for(int i=0;i<5;i++)                                        //using the pointer doing the sorted array
    {
        for(int j=i+1;j<5;j++)                                  //loop for traversing the array elements
        {
            if(*(p+i)>*(p+j))                                   //checking the value in an array
            {
                temp=a[i];                                      //logic for sorting array
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(int i=0;i<5;i++)                                        //loop for printing the array after sorting
    {
        printf("%d\t",*(p+i));                                  //printing the array elements after sorting
    }
}
