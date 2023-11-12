#include<stdio.h>
void wrong_swap(int x, int y);
void swap(int *x, int *y);
int main(){
    int x=7, y=8;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    wrong_swap(x, y); // will not work due to call by value
    swap(&x, &y); // work due to call by reference
    printf("The value of x and y after swap is %d and %d\n", x, y);
    return 0;
}
void wrong_swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}