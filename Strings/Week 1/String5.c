// Remove all the spaces from a given string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], new_str[100];

    int j=0;

    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';
    printf("String after removing spaces: %s", new_str);
    return 0;
}
