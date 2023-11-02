#include<stdio.h>

int main(){

    int x = 5;
    // declaration 
    int *ptr;
    //initialization
    ptr = &x;
    //indirection or deference or value at operator
    printf("%d",*ptr);
    //changing value through pointer

    *ptr =  4;
    printf(" %d",*ptr);



}