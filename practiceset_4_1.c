#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    printf("***Multiplication table of n***\n");
    for(int i=n; i<10; i++){
        printf("%d X %d = %d\n", i, n);
    }
    return 0;
}