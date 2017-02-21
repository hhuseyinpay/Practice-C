#include <stdio.h>
#include <stdlib.h>

void display2d(int *arr, int rows, int cols) {
    for(int i=0; i<rows;i++) {
        for(int j=0; j<cols; j++) {
            printf("%d -  ", *(arr + (i*cols) + j));
        }
        printf("\n");
    }
}

int main() {
    int rows = 2; int columns = 5;
    int *matrix = (int *)malloc(rows * columns * sizeof(int));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            *(matrix + (i*columns) + j) = i*j;
        }

    }
    printf("success\n");
    display2d(matrix, 2, 5);
    printf("matrix %p\n", matrix);
    printf("&matrix %p\n", &matrix);
   // printf("&matrix[0][0] %p\n", &matrix[0][0]);
    printf("matrix* %p", *matrix);
    return 0;
}
