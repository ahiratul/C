#include<stdio.h>
int main(){
    float length,width;
    printf("Enter the lenght: ");
    scanf("%f",&length);
    printf("Enter the width: ");
    scanf("%f",&width);
    float perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle is: %f\n", perimeter);
    return 0;
}