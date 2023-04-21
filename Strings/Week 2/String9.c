// Write a C program to reverse the words in a given string.

#include <stdio.h>
#include <string.h>

int main() {
    char string[1000], reversed[1000];
    int i, j = 0, len;
    
    printf("Enter a string: ");
    gets(string);
    
    len = strlen(string);
    
    for (i = len - 1; i >= 0; i--) {
        if (string[i] == ' ' || i == 0) {
            int k;
            if (i != 0) {
                k = i + 1;
            } else {
                k = 0;
            }
            while (string[k] != ' ' && string[k] != '\0') {
                reversed[j] = string[k];
                j++;
                k++;
            }
            reversed[j] = ' ';
            j++;
        }
    }
    
    reversed[j] = '\0';
    
    printf("The string you entered is: %s\n", string);
    printf("Reversed string: %s", reversed);
    
    return 0;
}
