#include <stdio.h>
#define N 5


void main(){

    int arr[N],*p;
        printf("Enter %d elements of array\n",N);
    for (p = arr; p < arr + N; p++)
    {
        scanf("%d",p);
    }
    printf("The reverse series is \n");
    for ( p = arr + N-1; p >= arr; p--)
    {
        printf(" %d",*p);
    }
    

}