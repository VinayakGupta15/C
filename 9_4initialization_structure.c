#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee Vinayak = {100, 52.1, "Vinayak"};
    
    printf("Name is: %s\n", Vinayak.name);
    printf("Name is: %d\n", Vinayak.code);
    printf("Name is: %f\n", Vinayak.salary);
    
    return 0;
}