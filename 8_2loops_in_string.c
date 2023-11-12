#include<stdio.h>

int main(){
    char str[] = "Vinayak"; 
    // char str[] = {'v', 'i', 'n', 'a', 'y', 'a', 'k', '\0'};

    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}