#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //For generating Random number 
    int number;
    srand(time(0)); // For Initilization
    number = rand()%10 + 1;//Generate random number between 1 & 10
    printf("The number is %d\n", number);
    return 0;
}