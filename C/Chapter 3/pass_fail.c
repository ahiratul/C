#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks(0-100): ");
    scanf("%d",&marks);
    // if(marks>=0 && marks <=30){
        // printf("FAIL \n");
    // }else if(marks >30 && marks <=100){
        // printf("PASS \n");
    // }else{
        // printf("Invalid Marks!");
    marks<=30? printf("FAIL \n"):printf("Pass \n");
        // else("Invalid marks!");
    return 0;
}