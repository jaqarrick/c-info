#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main () {

    float fahr, celsius;

    fahr = LOWER;
    
    // numbers after % like 3.0 define how wide the characters should be printed
    printf("%3s %6.1s\n", "F", "C");

    while(fahr <= UPPER){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    return 0; 
    
}