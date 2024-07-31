#include<stdio.h>

void checkChar(char str[],char ch);

int main(){
    char str[]="This is a check for character is present or not";
    char ch='s';
    checkChar(str,ch);
}
void checkChar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("char is present!");
            return;
        }
    }
    printf("character is NOT present:(')");
}
