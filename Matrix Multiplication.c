#include <stdio.h>

#define SIZE 3

void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
}

int main() {
    int A[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[SIZE][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[SIZE][SIZE];

    multiplyMatrices(A, B, result);

    printf("Matrix Multiplication Result:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
