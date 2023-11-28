#include <stdio.h>

void main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

  /*  for (ptr  = &arr[0]; ptr < &arr[n] ; ptr++)  can also use for(ptr = a;ptr < a+n ;ptr ++)
    {
        sum += *ptr;
    }
    
    */

    for (int  i = 0; i < n; i++)
    {
        sum += *(arr+i);
    }
    
    printf("%d",sum);


}