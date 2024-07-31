#include<stdio.h>
int main(){
    int marks [2][4];
    marks [0][0]=10;
    marks [0][1]=7;
    marks [0][2]=8;
    marks [0][3]=9;

    marks [1][0]=8;
    marks [1][1]=9;
    marks [1][2]=10;
    marks [1][3]=8;

    printf("%d",marks [1][2]);
    return 0;
    
}