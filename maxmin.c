#include <stdio.h>

void minmax(int arr[],int len,int *min,int *max){

    *min = *max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
        else if(arr[i] < *min)
            *min = arr[i];
        else
            continue;
    }
}


void main(){

int arr[] = {1,1,2,2,3,4,5,5};
int len = sizeof(arr)/sizeof(arr[0]);
int min,max;
minmax(arr,len,&min,&max);
printf("The maximum element is %d and the minimum element is %d",max,min);

}