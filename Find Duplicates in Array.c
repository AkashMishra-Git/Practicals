#include <stdio.h>

void findDuplicates(int arr[], int n) {
    printf("Duplicate elements: ");
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                printf("%d ", arr[i]);
}

int main() {
    int arr[] = {3, 1, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);
    return 0;
}
