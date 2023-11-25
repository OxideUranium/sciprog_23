#include <stdio.h>
#include <stdlib.h>


// Function to allocate memory for an array of doubles
double *allocatearray(int order) {
    double *array = (double *)malloc(order * sizeof(double));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    return array;
}

// Function to calculate the factorial
double factorial(int n) {
    double result = 1.0;
    int i;
    for (i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to print the array with dynamic size
// 
void printarray(double *array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// functino to fill the array with ones
// I need to pass the size as an argument to this funtion
void fillwithones(double *array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        array[i] = 1;
    }
}

// Function to estimate e using the series and store each term in an array
double estimate_e(int order) {
    double *terms = allocatearray(order);
    double e = 1.0; // Initialize e with the first term of the series
    int i;
    for (i=1; i < order; ++i) {
        // Store each term in the array
        terms[i] = 1.0 / factorial(i);
        // Add the term to the sum
        e += terms[i];
    }

    // Free the allocated memory
    free(terms);
    
    return e;
}

// Main function to demonstrate the estimate of e
int main() {
    int order;
    for(order=1; order<=15 ; order++){
        double e_estimate = estimate_e(order);
        printf("f(%d) = %f\n", order, e_estimate);
    }

    

    return 0;
}
