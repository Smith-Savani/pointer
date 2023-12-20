#include <stdio.h>


int add (int a,int b){
    return a+b;
}

void main(){


int (*ptr)(int,int) =  add;
int result = ptr(10,20);
printf("%d",result);


}