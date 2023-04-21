#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string with spaces

    char longest_word[1000] = "", current_word[1000];
    int longest_len = 0, current_len = 0;
    int i, j;

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            current_word[current_len] = '\0';
            if (current_len > longest_len) {
                longest_len = current_len;
                strcpy(longest_word, current_word);
            }
            current_len = 0;
        } else {
            current_word[current_len] = str[i];
            current_len++;
        }
    }

    printf("Longest word: %s\n", longest_word);
    printf("Length: %d\n", longest_len-1);

    return 0;
}
