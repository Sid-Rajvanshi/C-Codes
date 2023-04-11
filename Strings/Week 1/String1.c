// Count the number of vowels in a given string

#include <stdio.h>
#include <string.h>

int main()
{
    char *str;
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    // int x=strlen(str);

    // printf("Size = %d\n", x);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }

    printf("Number of vowels in the string: %d", count);
    return 0;
}
