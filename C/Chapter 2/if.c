#include<stdio.h>
int main(){
    int age;
    printf("Enter the age :");
    scanf("%d",&age);

    if (age>=18){
        printf("You are an Adult\n");
        printf("You can drive\n");
    }
    else{
        printf("Not adult\n");
    }
    printf("Thank You");
return 0;
}

