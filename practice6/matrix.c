#define N 5
#define P 3
#define Q 4

// Matrix multiplication
void matrixMulti(double A[N][P], double B[P][Q], double C[N][Q]) {
    int i;
    for (i=0; i< N; ++i) {
        for (int j =0; j<Q; ++j) {
            for (int k = 0; k<P; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
