#include<stdio.h>
int main (){
    int age=12;
    int *ptr=&age;
    printf("ptr =%u\n",ptr);
    ptr--;
    printf("ptr =%u\n",ptr);

    return 0;
}