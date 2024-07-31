#include<stdio.h>
void pHello();//declaration
void printgoodbye();

int main(){
    pHello();//call
    printgoodbye();
    return 0;

}

// function defination
void pHello(){
    printf("Hello!\n");
}
void printgoodbye(){
 printf("Good Bye!");}
