#include <stdio.h>

int main() {
    int arr[] = {10, 25, 14, 78, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Largest element: %d\n", max);
    return 0;
}
