#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 213;  or you can write arrow operator - ptr->code = 213
    ptr->code = 213;
    printf("%d", e1.code);
    return 0;
}