#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp){
    printf("The Name of employee is: %s\n", emp.name);
    printf("The Code of employee is: %d\n", emp.code);
    printf("The Salary of employee is: %f\n", emp.salary);
}

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 213;  or you can write arrow operator - ptr->code = 213
    strcpy(ptr->name, "Vinayak");
    ptr->code = 213;
    ptr->salary = 21.55;
    show(e1);
    
    return 0;
}