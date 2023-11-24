#include <stdio.h>

#define N 5
#define P 3
#define Q 4

// Declare matrix multiplication function
void matrixMulti(double A[N][P], double B[P][Q], double C[N][Q]);

int main() {
    double A[N][P], B[P][Q], C[N][Q];

    // Initialize A
    int i;
    for (i = 0; i < N; ++i) {
        for (int j = 0; j < P; ++j) {
            A[i][j] = i + j; 
        }
    }

    // Initialize B
    for (i = 0; i< P; ++i) {
        for (int j = 0; j<Q; ++j) {
            B[i][j] = i - j; // Bij = i - j
        }
    }

    // Initialize C 
    for (i=0; i<N; ++i) {
        for (int j = 0; j<Q; ++j) {
            C[i][j] = 0.0;
        }
    }

    

    // Calculate multiplication
    matrixMulti(A, B, C);

    // Print out the result
    printf("Matrix A:\n");
    for (i = 0; i<N; ++i) {
        for (int j = 0; j<P; ++j) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i<P; ++i) {
        for (int j = 0; j<Q; ++j) {
            printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C (Result):\n");
    for (i = 0; i< N; ++i) {
        for (int j = 0; j<Q; ++j) {
            printf("%.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
