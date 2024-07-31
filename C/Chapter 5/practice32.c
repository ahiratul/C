#include<stdio.h>
float convertfar(float celcius);
int main(){
    float far=convertfar(78);
    printf("far : %f",far);
    return 0;
}
float convertfar(float celcius){
    float far=celcius*(9.0/5.0)+32;
    return far;
}