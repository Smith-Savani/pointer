#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};
   /* int *ptr = &arr;
    printf("%d",*ptr);       will print first element
    */
   int *ptr = &arr[0];
   ptr = ptr + 4;
   printf("%d",*ptr);
    return 0;
}