#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    int sumRow = 0, sumCol = 0;
    int diagSum1 = 0;
    int diagSum2 = 0;
    bool isMagic = false;
    int i,j;

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;
    printf("DEBUG: M=%d\n", M);

    // TODO: 


    // Checking that the main and secondary
    // diagonals each add up to M
    for (i=0; i < n; i++) {
        diagSum1 += square[i][i];
        diagSum2 += square[i][n - 1 - i];
    }
    printf("DEBUG: diagSum1:%d, diagSum2:%d\n", diagSum1, diagSum2);

    // Checking that every row and column add up to M

    for (i = 0; i < n; i++) {
        sumCol=0;
        sumRow=0;
        for (j=0; j < n; j++) {
            sumRow += square[i][j]; // Sum for the i-th row
            sumCol += square[j][i]; // Sum for the i-th column
        }
        if(sumRow!=M || sumCol!=M){
            isMagic = false;
        }
        printf("DEBUG: i=%d, sumRow:%d, sumCol:%d\n", i, sumRow, sumCol);
        
    }

    

    // If passed all checks, it is a magic square
    if (sumRow != diagSum1 || sumCol != diagSum2){
        isMagic = false;
    } else {
        isMagic = true;
    }
    
    return isMagic;
    

}

