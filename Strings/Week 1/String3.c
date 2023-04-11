// Concatenate two given strings

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    int total1 = strlen(str1);
    int total2 = strlen(str2);

    int total = total1 + total2;

    char result[total];

    for (i = 0; i<total1; i++)
    {
        result[i] = str1[i];
    }
    for (j = 0; j<total2; j++)
    {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';

    printf("Concatenated string: %s", result);

    return 0;
}
