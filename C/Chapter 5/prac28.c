#include<stdio.h>

    void namaste();
    void bonjor();
    
    int main(){
        printf("Enter your nationality: ");
        char ch;
        scanf("%c",&ch);

        if(ch=='i'){
            namaste();
        }else{
            bonjor();
        }
        return 0;
    }

void namaste(){
    printf("Namaste\n");
}
void bonjor(){
    printf("Bonjour\n");
}//4:20