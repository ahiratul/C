// // Write a function to revece and array.
// #include<stdio.h>
// int reverse(int arr[],int n);
// void printArr(int arr[],int n);
// int main(){
//     int arr[]={1,2,3,4,5};
//     reverse(arr,5);

//     return 0;
    
//     }
//         void printArr(int arr[],int n){
//             for (int i=0;i<n;i++){
//                 printf("%d\t",arr[i]);
//             }
//             printf("\n");
//         }

// int reverse(int arr[],int n){
//     for(int i=0;i<n/2;i++){ 
//     int firstVal=arr[i];
//     int secondVal=arr[n-i-1];
//     arr[i]=secondVal;
//     arr[n-i-1]=firstVal;
   
//     }  
// }
#include <stdio.h>

void reverse(int arr[], int n);
void printArr(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArr(arr, n);

    reverse(arr, n);

    printf("Reversed array: ");
    printArr(arr, n);

    return 0;
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
