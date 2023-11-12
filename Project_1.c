#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //For generating Random number 
    int number, guess, nguesses=1;
    srand(time(0)); // For Initilization
    number = rand()%10 + 1;//Generate random number between 1 & 10
    // printf("The number is %d\n", number);
    //Keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 10\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}