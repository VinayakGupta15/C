#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;

void show(struct employee emp1){
    printf("The Name of employee is: %s\n", emp1.name);
    printf("The Code of employee is: %d\n", emp1.code);
    printf("The Salary of employee is: %f\n", emp1.salary);
}


int main(){
    //Declaring ptr and e1
    emp e1;
    emp *ptr;

    //Pointing ptr to e1
    ptr = &e1;

    //Set the member value for e1
    strcpy(ptr->name, "Vinayak");
    ptr->code = 213;
    ptr->salary = 21.55;
    show(e1);

    return 0;
}