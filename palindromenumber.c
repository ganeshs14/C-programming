#include <stdio.h>
int function(int num)
{
    int temp = num, reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num%10;
        num = num / 10;
    }
    printf("REVERSED number is: %d\n", reversed);

    if (temp == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("+++Checking Palindrome Condition+++\n");
    printf("Enter a number: ");
    scanf("%d", &number);
    if (function(number))
    {
        printf("Number is a PALINDROME !!");
    }
    else
    {
        printf("Number is not a PALINDROME !!");
    }

    return 0;
}