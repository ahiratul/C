#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter the number: ");
        scanf("%d",&n);
        printf("%d\n",n);

        // if(n %2 !=0){
        if(n%7==0){
            break;
    }

    }while(1);
    printf("Not Valid!");
    return 0;
}