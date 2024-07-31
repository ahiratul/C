#include<stdio.h>
int main(){
    float length,width;
    printf("Enter the lenght: ");
    scanf("%f",&length);
    printf("Enter the width: ");
    scanf("%f",&width);
    printf("Area of rectangle is: %f",2*(length+width));
    return 0;
}