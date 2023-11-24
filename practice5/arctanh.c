#include <stdio.h>
#include <math.h>

// Calculate the arctanh using the Maclaurin series
double arctanh1(double x, double delta) {
    double sum = 0.0;
    double term;
    int n = 0;

    do{
        term = pow(x, 2*n + 1) / (2*n + 1);
        sum += term;
        n++;
    } while (fabs(term) > delta);

    return sum;
}

// Natural logarithms method
double arctanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

int main() {
    double delta;
    printf("Enter the value of delta: ");
    scanf("%lf", &delta);

    int size = (int)(1.8/0.01) + 1;
    double results1[size]; // Results of arctanh1()
    double results2[size]; // Results of arctanh2()

    int i;
    for ( i=0; i<size; i++) {
        double x = i * 0.01 - 0.9;
        results1[i] = arctanh1(x, delta);
        results2[i] = arctanh2(x);
    }

    // Comparing the accuracy of both methods
    printf("x\tarctanh1\t\t\tarctanh2\t\t\tDifference\n");

    for ( i=0; i<size; i++) {
        double x=i*0.01 - 0.9;
        double diff = fabs(results1[i]-results2[i]);
        printf("%.2f\t%.10f\t%.10f\t%.10f\n", x, results1[i], results2[i], diff);
    }

    return 0;
}
