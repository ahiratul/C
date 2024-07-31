#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    
    if(marks >= 90){
        printf("A+ \n");
    }else if(marks >= 70){
        printf("A \n");
    }else if(marks >= 30){
        printf("B \n");
    }else{
        printf("C \n");
    }
    
    return 0;
}
