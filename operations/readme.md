# Operations in C

## Operators:

Arithmetic operators include symbols like `+`, `-`, `/` which can be performed simply: 

Suppose we want to print a table that displays values of fahrenheit and celsius side by side. To begin, we have the formula `C = (5/9)(F-32)`. We want to limit the table to displaying values between `0 degrees F` and `300 degrees F`. 

Let's look at a C program that would accomplish this. To begin we'd start with our `main` function: 
```
int main () {

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    return 0; 
    
}
```

We've defined all our variables as integers or `int`, including the `lower` and `upper` range. The `step` variable will determine the interval between the printed values. Let's print some values!

```
#include <stdio.h>

int main () {

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0; 
    
}
```

Our program begins by setting the value of `fahr` equal to `lower` i.e. `0`. This is our starting value for fahrenheit. 

Our `while` loop is quite simple. We first set the condition `while(fahr <= upper)` or "While the value of F is less or equal to the upper value (i.e. `300), do _something_. That _something_ is the body of the loop:

```
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
```
We set the value of C proportional to F using our starting function, then print the values of F and C with `printf`. Finally, we update the value of F to the next value we want to run. 

The program outputs the following table:

```
0       -17
20      -6
40      4
60      15
80      26
100     37
120     48
140     60
160     71
180     82
200     93
220     104
240     115
260     126
280     137
300     148
```

One issue with this program is that it's not printing accurate values. 0 degrees F is actually -17.8 degrees C, not -17. This requries us to move away from `int` declarations and instad use floating-point arithmetic with `float`.

Let's see what our program would look like with floats implemented:
```
#include <stdio.h>

int main () {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("F\tC\n");

    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%f\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0; 
```

This program print's the accurate decimal values of the conversion: 
```  
 0  -17.8
 20   -6.7
 40    4.4
 60   15.6
 80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9

```

### Symbolic Constants
A final note about our temperature conversion - it's generally bad practice to bury important / constant numbers like `lower`, and `upper`. Instead we want to give them meaningfull names using a _symbolic name_ of _symbolic constatnt_. We can do this like so:
```
#define name replacement text
```

In our example this would look like this:
```
# define LOWER 0 /* lower limit */
# define UPPER 300 /* upper limit */ 
# define STEP 20 /* step size */
```

Notice there is no semicolon at the end of the define line. These are generally written in upper case. 

Here's our final program: 

```
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

```
