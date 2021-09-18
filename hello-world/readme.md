# printf and scanf

## printf
#### `printf("format specifier",argument_list);`
**Used to log messages and data to the console.**

```
#include<stdio.h>

int main()
{

    printf("Hello World");

    return 0;

}
```

`printf` can also print out data, which must be defined by a format specifier, which can be `%d` (integer), `%c` (character), `%s` (string), `%f` (float) `%lf` (double) and `%x` (hexadecimal) variable.

For example to print a number, we'd need to adjust our function:

```
int main() 
{

    int num = 100;
    printf("The number is %d \n", num);

    return 0;

}
```

## scanf
#### `scanf("format specifier",argument_list);`

**Used to read data input from the console.** 

`scanf` can read character, numeric, string, and other data and then assign that data to variables. 

```
#include<stdio.h>

int main()
{

    char name[10];
    printf("What's your name? \n");
    scanf("%s", name);
    printf("Hello, %s! \n", name);

    return 0;

}
```
