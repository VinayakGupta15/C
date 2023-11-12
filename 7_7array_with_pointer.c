#include<stdio.h>

// void printArray(int *ptr, int n){
//     for(int i=0, i<n; i++){
//     printf("The value of element %d is %d", i+1, *(ptr+i));
//     }
// }
void printArray(int ptr[], int n){
    for(int i=0; i<n; i++){
    printf("The value of element %d is %d\n", i+1, ptr[i]);
    ptr[2] = 3554; //This value will  changes in arr array of main as well
    }
}

int main(){
    int arr[] = {1,54,546,466,35};
    printArray(arr, 5);
    printf("%d", arr[2]);
    return 0;
}