#include<stdio.h>
float rectangleArea(float a,float b);
int main(){
    float a,b;
    printf("Enter the value of side a: ");
    scanf("%f",&a);
    printf("Enter the value of side b: ");
    scanf("%f",&b);
    printf("area is:%f", rectangleArea(a,b));
    return 0;
    
}
float rectangleArea(float a,float b){
    return a*b;
}