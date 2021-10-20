#include <stdio.h>

int main(){

    char *s = "Hi!";
    // we can navigate to the address of the first character
    printf("%c\n", *s);
    // by adding 1 byte (or piece of data) to the address we can navigate to the second character of the string
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));

    return 0;
}