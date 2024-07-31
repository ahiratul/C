#include<stdio.h>
void square(int n);
int main(){
    int number=4;
    square(number);
    printf("number=%d\n",number);//pass by value
    return 0;
}
void square(int n){
    n=n*n;
    printf("square=%d\n",n);//all changes in copy value.
}