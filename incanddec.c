#include <stdio.h>

void main(){

    int arr[] = {3,23,54,32,89,77,98};
    int *ptr =  &arr[0];
    printf(" %d",*(ptr++));
    printf(" %d",*(++ptr));
    printf(" %d",*(--ptr));
    printf(" %d",*(ptr--));



}