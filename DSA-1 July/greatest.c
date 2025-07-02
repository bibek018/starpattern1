// 1) To find the maximum element in the given array of 5 elements.
#include <stdio.h>

int main() {

    int arr[5];
    printf("Enter 5 elements:\n");
    for (int  i = 0; i < 5; i++)
    {
      scanf("%d",&arr[i]);
        /* code */
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(arr[i]>arr[i+1]){
           int t=arr[i];
           arr[i] = arr[i+1];
              arr[i+1] = t; 
        }
    }
     printf("The greatest element is %d",arr[4]);
    return 0;
}