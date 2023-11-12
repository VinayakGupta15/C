#include<stdio.h>

int main(){
    FILE *ptr;
    // fgets is for reading a file/
    // ptr = fopen("example.txt", "r");
    // // char c = fgetc(ptr);/
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));

    ptr = fopen("example.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}