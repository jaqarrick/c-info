# Character Input and Output

Many programs for processing character data are expansions of the simple programs defined in the standard library. 

Text input / output is dealt with as _streams of characters_. A _text stream_ is **a sequence of characters divided into lines**, where each line consists of zero or more characters followed by a `\n` character. 

Here are two important character processing functions, defined in the standard library:

`getchar`: when this is called it reads the _next input character_ from a text stream and returns its value. 

```
c = getchar()
```

the variable c contains the next character of input. 

`putchar`: prints a chracter each time it is called: `putchar(c)` prints the contexts of the integer variable `c` as a character (usually on the screen). 

Let's consider the following program: 

```
# include <stdio.h>

int main(){
    double nc;

    for (nc = 0; getchar() != EOF; ++nc){
        printf("%.0f\n", nc);
    }

    return 0;
}

```

First we define a `double` variable `nc`, which can be printed as a float with `%f`. Our for loop conditions are as follows: (1) Initialize the `nc` value as `0`. (2) The end condition is defined as `getchar() !== EOF`. `EOF` stands for "end of file" and is included in standard library. So we're checking if the current character is not get the end of the stream. Next we increment the value of `nc` by one with `++nc` - this is the same as `nc = nc + 1` but with more elegant syntax. Our for loop simply prints the number of characters counted thus far in the loop. 



