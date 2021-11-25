#include <stdio.h>
int print(int start, int stop)
{
    if (start == stop)
    {
        return 0;
    }
    else
    {
        printf("%d\t", start);
        print(start + 1, stop);
    }
}

int main()
{
    int star, end;
    printf("Enter a start no.\n");
    scanf("%d", &star);
    printf("Enter a end no.\n");
    scanf("%d", &end);
    if (star > end)
    {
        printf("Invalid entry !!");
    }
    else
    {
        printf("\n<--Series: [%d, %d) -->\n",star,end);
        print(star, end);    
    }
    
    
    return 0;
}