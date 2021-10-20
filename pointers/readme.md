# Pointers
Pointers allow us to store and reference the _location in memory_ of a variable. 

Consider the following example:

```
include <stdio.h>

int main(){

    int i = 10;

    int *address = &i;

    printf("The variable's value is %d", i);
    printf("The variable lives at %p, address);
    
    return 0;
}
```

The integer `i` is declared with the value of `10`, but we can reference the actual location of the value by creating a _pointer_. The `*` symbol tells our program we are creating a pointer type. Addresses of a variable can be accessed with a preceding `&` symbol. This can be used outside a variable declaration like so:
```
printf("The integer i lives at %p\n", &i);
```

For more examples explore the programs in the examples directory of this chapter. 