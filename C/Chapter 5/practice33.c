#include<stdio.h>
int calcpercentage(int math,int english,int science);
int main(){
    int math=56;
    int english =91;
    int science=61;
    printf("percentage is: %d",calcpercentage(math,english,science));
    return 0;
}
int calcpercentage(int math,int english,int science){
    return((math+english+science)/3);

}