#include<stdio.h>

int main(){
    int i=0, n, factorial=1;
    printf("Enter the factorial number\n");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d", n, factorial);

    return 0;
}