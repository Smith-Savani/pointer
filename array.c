#include <stdio.h>

void main(){

    int arr1[5] = {1,2,3,4,5};
    printf("The base address is %x\n",arr1);
    printf("The first element is %d\n",*arr1);
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("The base address of first 1D array is %x\n",arr2);
    printf("The base address of first 1D array element is %x\n",*arr2);
    printf("The base address of first 1D array element is %x\n",*arr2+1);
    printf("The base address of first 1D array element is %d\n",**arr2);
    printf("The element is %d\n",**(arr2+1));
    printf("The element is %d\n",*(*arr2+1));

    int arr3[2][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
    printf("%x\n",arr3);
    printf("%x\n",*arr3);
    printf("%x\n",**arr3);
    printf("%x\n",*(arr3+1));
    printf("%x\n",*arr3+1);
    printf("%d\n",*(**arr3+1));
    printf("%d\n",**(*arr3+1));



}