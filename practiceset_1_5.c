#include<stdio.h>

int main(){
    int principal, rate, year;

    printf("Enter the principal\n");
    scanf("%d", &principal);

    printf("Enter the rate\n");
    scanf("%d", &rate);

    printf("Enter the year\n");
    scanf("%d", &year);

    int simpleInterest = (principal * rate * year)/100;
    printf("The value of simpleInterest is %d", simpleInterest);
    return 0;
}