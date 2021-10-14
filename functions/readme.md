# Functions

If you are following this guide in order, we haven't defined any functions other than the `main` function. Let's define another function that does some utility that we can reuse in our `main` function. 

```
int power(int base, int n){

    int i;

    for(i = n; n > 0; --n){
        i = i * base;
    }

    return i;
}
```

The `power` function takes in two integers in its arguments. A base integer `base` and a second integer `n` to determine what power the first should be raised to. Let's see how we could use that in our main function: 

```
int main(){


    int b = 10;
    int p = 3;

    int calculated = power(b, p);

    printf("%d to the power of %d is %d\n", b, p, calculated);

    return 0;

}

```

We can define the integers we want to pass into `power` and then define a new integer `calculated` which stores the calculated value returned from the `power function`.

This is a very basic example, but illustrated how easy it is to reuse functions inside any program. 