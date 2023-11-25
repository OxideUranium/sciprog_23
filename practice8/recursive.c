#include <stdio.h>

// Function to compute the GCD recursively
int gcd_recursive(int a, int b) {
    if (b==0) {
        return a;
    }else{
        return gcd_recursive(b, a % b);
    }
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("The GCD of %d and %d is %d\n", a, b, gcd_recursive(a, b));
    return 0;
}
