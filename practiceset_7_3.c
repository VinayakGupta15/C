#include<stdio.h>

int main(){
    int n;
    int mul[10];
    // printf("Enter the number n\n");
    // scanf("%d", &n);
    for(int i=0; i<10; i++){
        mul[i] = 5*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("5X%d = %d\n", i+1, mul[i]);
    }
    return 0;
}