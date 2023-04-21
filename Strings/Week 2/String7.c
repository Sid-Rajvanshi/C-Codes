// Write a C program that removes all spaces from a given string

#include <stdio.h>
#include <string.h>

int main() {
    char string[1000], result[1000];
    int i, j = 0;
    
    printf("Enter a string: ");
    gets(string);
    
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ') {
            result[j++] = string[i];
        }
    }
    result[j] = '\0';
    
    printf("String after removing spaces: %s", result);
    
    return 0;
}
