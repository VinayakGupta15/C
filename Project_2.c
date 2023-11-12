#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you lose, 0 if draw
    if (you == comp)
    {
        return 0;
    }
    // Non-draw conditions
    // Cases-sw, sg, ws, wg, gs, gw
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 's' && comp == 'w')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 's' && comp == 'g')
    {
        return 1;
    }

    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'w' && comp == 's')
    {
        return 1;
    }

    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return -1;
    }

    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    comp = 's';
    printf("Enter 's' for snake, 'w' for water, 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    
    if(result==0){
        printf("Game draw\n");
    }
    else if(result==1){
        printf("You win\n");
    }
    else{
        printf("You lose\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}