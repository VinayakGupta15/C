#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];
    strcpy(facebook[0].name, "Vinayak");
    facebook[0].code = 10;
    facebook[0].salary = 15.21;

    strcpy(facebook[1].name, "Rohan");
    facebook[1].code = 15;
    facebook[1].salary = 56.21;

    strcpy(facebook[2].name, "Ram");
    facebook[2].code = 17;
    facebook[2].salary = 45.21;
    printf("Done");
        return 0;
}