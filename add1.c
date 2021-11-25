#include <stdio.h>

int main()
{
    int n = 5, i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", n);

            if (i == 1 && i < n - 1 && j == 0)
            {
                for (k = 1; k < n - 1; k++)
                {
                    printf("%d", n - 1);
                }
                printf("%d", n);
                break;
            }

            if (i == 2 && i < n - 2 && j == 0)
            {
                printf("%d", n - 1);
                for (k = 1; k < n - 3; k++)
                {
                    printf("%d", n - 2);
                }
                printf("%d", n - 1);
                printf("%d", n);
                break;
            }
        }

            if (i == 3 && i < n - 3 && j == 0)
            {
                printf("%d", n - 1);
                printf("%d", n - 2);
                for (k = 1; k < n - 1; k++)
                {
                    printf("%d", n - 1);
                }
                printf("%d", n - 2);
                printf("%d", n - 1);
                printf("%d", n);
            }
        printf("\n");
    }

    return 0;
}