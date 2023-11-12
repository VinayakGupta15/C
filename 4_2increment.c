
#include<stdio.h>

int main(){
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
    i++; //---> Pehla print fir increment
    ++i; //---> Pehla increment fir print

    i+=10; //-> Increment i by 10
    printf("The value of i is %d\n", i);
    return 0;
}