#include<stdio.h>
int main(){
    
    int marks [3];
    printf("Enter the marks eng: ");
    scanf("%d",&marks [0]);

    printf("Enter the marks math: ");
    scanf("%d",&marks [1]);

    printf("Enter the marks hindi: ");
    scanf("%d",&marks [2]);

    printf("eng %d ,math %d hindi %d",marks [0],marks[2],marks[1]);
    return 0;

}
