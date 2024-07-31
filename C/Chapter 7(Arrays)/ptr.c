#include<stdio.h>
int main(){
    int age =26;
    int _age=24;
    int *ptr=&age;
    int *_ptr=&_age;
    printf("%u,%u difference = %u\n",ptr,_ptr,ptr-_ptr);
    _ptr  =&age;
    printf("comapre=%u\n",ptr==_ptr);
    return 0;
}