#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt", "r"); // r is reading the file
    // ptr = fopen("sample.txt", "w"); // w is writing to a file
    return 0;
}