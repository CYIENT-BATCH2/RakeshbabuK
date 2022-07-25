/*Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)*/



#include<stdio.h>                                                           //header file
void selection_sort(int [], int, int, int, int);                            //Function prototype
int main()                                                                  //main function
{
    int size,i,j;  				                                           //variable declaration
    //read the value from the user
    printf("Enter the size of the list: ");	
    scanf("%d", &size);
    int num_array[size];                                                    //array declaration
    //read the elemets from the user
    printf("Enter the elements in list:"); 
    for (i=0;i<size;i++)
    {
        scanf("%d",&num_array[i]);
    }
    selection_sort(num_array,0,0,size,1);                                    //Selection function call
    printf("The sorted list in array elements is : ");
    for (i=0;i<size;i++)
    {
        printf("%d  ",num_array[i]);
    }
    return 0;
}
void selection_sort(int num_array[],int i,int j,int size,int flag)               //Function declaration actual logic of the sorting is inside of this function 
{
    int temp;                                                                   //declaring the variable
    if(i<size-1)
    {
        if(flag)
        {
            j=i+1;
        }
        if(j<size)                                                             //if elements are greater it will swap the elements
        {
            if(num_array[i]>num_array[j])
            {
                temp = num_array[i];
                num_array[i] = num_array[j];
                num_array[j] = temp;
            }
            selection_sort(num_array,i,j+1,size,0);                             //calling the function
        }
        selection_sort(num_array,i+1,0,size,1);
    }
}
