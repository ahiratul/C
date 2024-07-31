#include<stdio.h>
int main(){
    int i=3;
    int*ptr=&i;
    int**pptr=&ptr;
    printf("value of i is: %d", **(pptr));
    return 0;
}