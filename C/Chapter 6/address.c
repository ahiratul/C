#include<stdio.h>
int main(){
    float num=3.00;
    float *ptr=&num;
    // printf("%p\n",&ptr);

    // printf("%p\n",&num);

    // printf("%p\n",ptr);



    printf("%f\n",num);//value
    printf("%f\n",*ptr);
    printf("%f\n",*(&num));



    return 0;

}