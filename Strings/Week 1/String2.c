// Check if a given string is a palindrome or not

#include <stdio.h>
#include <string.h>

int main()
{
    char *str;
    
    printf("Enter a string: ");
    gets(str);

    int length = strlen(str), flag = 0;


    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%s is not a palindrome", str);
    else
        printf("%s is a palindrome", str);
    return 0;
}
