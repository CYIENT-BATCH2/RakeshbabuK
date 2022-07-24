#include <stdio.h>
int main()
{
    int i,low,high,middle,n,key,array[100];                      //declaring the integer varaibale and array with size
    printf("Enter number of elements: ");                        //reading the number of elemets from the user
    scanf("%d",&n);
    printf("Enter %d integers\n", n);                           //reading all the elements of the array and storing it in the array
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("Enter value to find\n");                            //reading the value to be find fr the user and storing it in variable 
    scanf("%d",&key);
    low=0;                                                      
    high=n-1;                                                   //last element as high
    middle=(low+high)/2;                                        //mid as low plus high by 2
    while(low<=high)                                            
    {
        if(key>array[middle])                                      
        low=middle+1;
        else if(array[middle]==key)                                //if the key value is same as middle then its tha value to print
        {
            printf("%d found at location %d\n", key, middle+1);      //printing the value and position were it is found
            break;
        }
        else
        high=middle-1;                                           
        middle=(low+high)/2;
    }
    if(low>high)                                                    //if low value is more then high value we need to stop the loop
    printf("Not found! %d isn't present in the list\n", key);
    return 0;
}
