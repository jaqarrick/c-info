#include <stdio.h>

int power(int base, int n){

    int i;

    for(i = n; n > 0; --n){
        i = i * base;
    }

    return i;
}

int main(){


    int b = 10;
    int p = 3;

    int calculated = power(b, p);

    printf("%d to the power of %d is %d\n", b, p, calculated);

    return 0;

}