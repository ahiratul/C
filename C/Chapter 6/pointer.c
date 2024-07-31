#include<stdio.h>
int main(){
    int age=20;
    int *ptr=&age;
    int _age=*ptr;

    printf("Value at address operator: %d",_age);
    return 0;
}