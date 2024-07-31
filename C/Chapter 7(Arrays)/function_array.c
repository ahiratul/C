#include<stdio.h>
// may use: arr[]
  void printNumbers(int *arr,int n);
int main(){
  int arr[]={7,8,9,4,5,6};
  printNumbers(arr,6);
  return 0;
    }
    void printNumbers(int *arr,int n){
     for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
     }
     printf("\n");
    
    }