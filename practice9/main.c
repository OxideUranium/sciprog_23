#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    int i,j;

    // Define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);
    

    // Open the file 
    f = fopen(filename, "r");
    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }


    // Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }
    

    // Inputting integer data into the matrix;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            fscanf(f, "%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is a magic square
    bool magic = isMagicSquare(matrix, n);
    if (magic) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }

    // Freeing each row separately before freeing the array of pointers
    for (i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    // Close the file
    fclose(f);


    return 0;
}  


int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    // Count the number of lines in the file to 
    // determine the size of the matrix
    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("Number of lines, %d\n", count);
    fclose(fp); 
    return count;
}
