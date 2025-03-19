#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3}, arr2[] = {4, 5, 6}, merged[6];

    for (int i = 0; i < 3; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < 3; i++)
        merged[i + 3] = arr2[i];

    printf("Merged array: ");
    for (int i = 0; i < 6; i++)
        printf("%d ", merged[i]);

    return 0;
}
