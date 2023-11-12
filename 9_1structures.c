#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    // employee e1;
    // e1.salary = 34.43 --> wont work without employee structure
    struct employee e1;
    e1.code = 1; // code of employee
    e1.salary = 34.43;
    //e1.name = "Vinayak" --> wont work
    strcpy(e1.name, "Vinayak"); // work with the help of string
    
    printf("%s\n", e1.name);
    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);

    return 0;
}