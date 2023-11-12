#include<stdio.h>
#include<string.h>
// it depends on asky value
int main(){
    char st1[45] = "Hlo";
    char *st2 = "Brother";
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);
    return 0;
}