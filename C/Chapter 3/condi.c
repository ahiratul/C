#include<stdio.h>
int main(){

    int age ;
    printf("Enter the age: ");
    scanf("%d",&age);

    if (age> 18){
        printf("Your are an adult\n");
        printf("They can vote \n");
    }
    else{
        printf("not adult \n");
    }
    printf("Thank you!");
    return 0;
}