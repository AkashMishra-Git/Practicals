#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]); // Taking input

    printf("You entered: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]); // Displaying output

    return 0;
}
