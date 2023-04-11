// Check if a given string is a valid email address or not

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, at = 0, dot = 0;

    printf("Enter an email address: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '@')
        {
            at++;
            break;
        }
            
    }

    for (j = i+1; str[j] != '\0'; j++)
    {
        if (str[j] == '@')
        {
            printf("%s is not a valid email address", str);
            return 0;
        }
            
        if (str[j] == '.')
            dot++;
    }
    
    if (dot == 1)
        printf("%s is a valid email address", str);
    else
        printf("%s is not a valid email address", str);
        
    return 0;
}
