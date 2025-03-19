#include <stdio.h>

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            transpose[j][i] = A[i][j];

    printf("Transpose of Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
