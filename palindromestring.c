#include <stdio.h>
#include <string.h>
int function(char *str)
{
    int i, length, temp = 0;
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void function2(char *str)
{
    printf("Reversed string is:%s", strrev(str));
}

int main()
{
    char string[30];
    printf("Enter a string :\n");
    gets(string);
    printf("Entered string is:");
    puts(string);
    function2(string);
    if (function(string))
    {
        printf("\nNumber is not a PALINDROME !!");
    }
    else
    {
        printf("\nNumber is a PALINDROME !!");
    }
    return 0;
}