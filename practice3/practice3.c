#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Define the function to integrate
double f(double x) {
    return tan(x);
}

int main() {
    // Number of points
    int N = 12; 

    // Limits of integration
    double a = 0;
    double b = M_PI / 3;

    double h = (b - a) / (N - 1);    //Width   
    double result = 0.0;

    // Apply the trapezoidal rule
    result += (f(a) + f(b)) * h / 2.0; // First and last 
    int i;
    for (i = 1; i <= N - 2; ++i) { // Middle terms
        //i= 1,2,3... 10, so that 0 and 11 are not included
        result += f(a + i * h) * h;
    }

    //Compare the result and print
    double error = fabs(result - log(2));

    printf("The integral result is: %lf\n", result);
    printf("The real value of log(2) is: %lf\n", log(2));
    printf("Error = %lf\n", error);

    return 0;
}