// Write a C program to find the second most frequent character in a given string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char *str=NULL;
    int freq[100];
    int i, j, max, second_max;
    size_t len=0;

    printf("Enter a string:\0");
    getline(&str, &len, stdin);
    len = strlen(str);

 
    for (i = 0; str[i] != '\0' ; i++) {
        freq[i] = 0;
    }


    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                freq[i]++;
            }
        }
    }

 
    max = freq[0];
    second_max = freq[0];
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[i] > max) {
            second_max = max;
            max = freq[i];
        } else if (freq[i] > second_max && freq[i] < max) {
            second_max = freq[i];
        }
    }

    printf("The second most frequent character in the string is: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[i] == second_max) {
            printf("%c\n", str[i]);
            break;
        }
    }

    return 0;
}
