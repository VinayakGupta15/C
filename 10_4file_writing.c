#include<stdio.h>

int main(){
    FILE *fptr;
    int number = 34;
    fptr = fopen("example.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "using fprintf", number);
    fclose(fptr);
    return 0;
}