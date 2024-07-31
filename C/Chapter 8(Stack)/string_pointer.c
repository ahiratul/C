#include<stdio.h>
void printChange(char arr[]);
int main(){
    char *canChange="Sujeet Yadav";
    puts(canChange);
    canChange="Atul Yadav";
    puts(canChange);
    return 0;
}
void printChange(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
    }
    printf("\n");  
}


