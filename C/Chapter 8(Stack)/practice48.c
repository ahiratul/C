#include<stdio.h>
void printName(char arr[]);
int main(){
    // char firstName[50];
    // scanf("%s",firstName);
    // printf("Your name is %s",firstName);
    // return 0;
   char str[100];
//    gets(str);
//    puts(str);
    fgets(str,100,stdin);
    puts(str);
}
void printName(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
    }
    printf("\n");  
}


