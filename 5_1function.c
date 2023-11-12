#include<stdio.h>
void display();//Function Prototype

int main(){
    int a;
    printf("Step 1- Initializing display function\n");
    display();
    printf("Step 2- Display function finished its work\n");
    return 0;
}
//Function defination
void display(){
    printf("Step 3- this is the display\n");
}