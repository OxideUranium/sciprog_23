# Practice 7
This program estimates the value of the e using a series expansion. And during the calculation, dynamically allocated arrays will be used to store terms depending on the order. And then calculates the sum to estimate e.

## dynamicmemory.c
The output of the program is the values ​​from f(1) to f(15). We can see that the value is very close to the real e at about f10.

## Compile
```bash
gcc -o dynamicmemory dynamicmemory.c -lm
./dynamicmemory
```
