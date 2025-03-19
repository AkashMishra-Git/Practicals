#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void sortString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
}

bool isAnagram(char str1[], char str2[]) {
    sortString(str1);
    sortString(str2);
    return strcmp(str1, str2) == 0;
}

int main() {
    char str1[100], str2[100];
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    if (isAnagram(str1, str2))
        printf("Anagram\n");
    else
        printf("Not an Anagram\n");
    return 0;
}
