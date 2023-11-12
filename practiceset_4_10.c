#include<stdio.h>
// Disclaimer: This is not the best method to solve this problem
//Prime numer 
int main(){
    int n=3, prime=1;
    // printf("Enter the number\n");
    // scanf("%d", &n);

    for(int i=2;i<n;i++){
        if (n%i==0){
            prime = 0;
            break;
        }
    }
    if (prime==0){
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }
    return 0;
}