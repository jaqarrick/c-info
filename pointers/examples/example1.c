#include <stdio.h>

int main(){

    int i = 10;

    int *address = &i;

    printf("The variable's value is %d\n", i);
    printf("The variable lives at %p\n", address);
    
    return 0;
}