#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if(n==0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n- 2);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to n:\n");
    int i;
    for( i=0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
