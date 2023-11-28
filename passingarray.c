#include <stdio.h>

int add(int b[],int n){   // here b is a acts as a pointer

    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum += b[i];
    }
    
}



void main(){

    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d",add(arr,len));  // here we are not passing whole array but passing only base address


}