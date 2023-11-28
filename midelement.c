#include <stdio.h>

int *Mid(int arr[],int len){
    return &arr[len/2];
}

void main (){

    int arr[] =  {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *mid = Mid(arr,n);
    printf("The mid element is %d",*mid);
}