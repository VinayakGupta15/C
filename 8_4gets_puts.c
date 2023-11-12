#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s);
    puts(s);
    // printf("your name is %s", s);    only used for gets
    return 0;
}