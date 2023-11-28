#include <stdio.h>

void main(){
    int arr[] = {1,52,46,23,89,90};
    int *p = &arr[1] ,*q = &arr[5];

    printf(" %d",*(p+3));
    printf(" %d",*(q-3));
    printf(" %d",p-q);
    printf(" %d",q-p);
    printf(" %d",p < q);
    printf(" %d",*p < *q);


}