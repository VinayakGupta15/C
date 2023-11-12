/* Instruction and Operators
 type 4 - Conditional instruction and if else, else if basics
*/
#include<stdio.h>

int main(){
    int age;
    int vipPass = 0;
    // vipPass = 1;

    printf("Enter the age\n");
    scanf("%d", &age);

    //if((age <= 70 && age >= 18) || (vipPass==1))

    if(age <= 70 && age >= 18){
        printf("You are above 18 and below 70, you can drive\n");
    }
    else if(age > 70){
        printf("You cannot drive\n");
    }
    else{
        printf("You are not eligible to drive\n");
    }
    
    return 0;
}