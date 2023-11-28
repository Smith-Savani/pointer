#include <stdio.h>
#define ROW 3  
#define COLUMN 3


void main(){

    int arr[ROW][COLUMN] = {{1,2,3},{4,5,6},{7,8,9}};
    int *p;
    for ( p= &arr[0][0]; p <= &arr[ROW-1][COLUMN-1]; p++)
        printf(" %d",*p);
     
    
}