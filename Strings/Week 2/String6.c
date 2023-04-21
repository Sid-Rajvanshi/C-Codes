// Write a C program that counts the number of words in a given string.

#include <stdio.h>

int main() {
    char string[1000];
    int i, words=1;
    
    printf("Enter a string: ");
    gets(string);
    
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' || string[i] == '\n') {
            words++;
        }
    }
    
    printf("Number of words in the given string: %d", words);
    
    return 0;
}
