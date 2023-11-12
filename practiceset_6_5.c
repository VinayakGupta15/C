#include<stdio.h>

int main(){
    int i = 675;
    int *ptr;
    int *ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The value of i is %u", ptr_ptr);

    return 0;
}