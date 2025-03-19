#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int index = 0;
    int hash[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
        if (!hash[(int)str[i]]) {
            hash[(int)str[i]] = 1;
            str[index++] = str[i];
        }

    str[index] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
