#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("%d %d %d", a, ++a, a++);
    return 0;
}