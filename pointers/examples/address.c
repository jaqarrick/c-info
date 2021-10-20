#include <stdio.h>
#include <string.h>

int main(){


    char *s = "Hello World";
 
    // Prints out string 
    printf("%s\n", s);
    // Prints address of first character of string
    printf("%p\n", s);
    // Prints address of first character of string
    printf("%p\n", &s[0]);
    // Prints address of second character of string
    printf("%p\n", &s[1]);
    // Prints address of third character of string
    printf("%p\n", &s[2]);
    // Prints first character of string
    printf("%c\n", *s);

    // Now print out all addresses of each character in string
    int string_length;

    string_length = strlen(s);
    printf("Length of string: %d\n", string_length);
    
    for(int i = 0; i < string_length; ++i){
        printf("Address of char %c: %p\n", s[i], &s[i]);
    }

    return 0;


}