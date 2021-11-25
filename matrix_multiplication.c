#include <stdio.h>

int arr1[10][10], arr2[10][10], arr3[10][10];
int i, j;
void getValue(int a, int b, int arr[10][10])
{
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("Item -[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int a, int b, int arr[10][10])
{
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("|%d|", arr[i][j]);
        }
        printf("\n");
    }
}

void calculate(int m, int n, int z)
{
    int k, sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < z; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }
}

void calculatedisplay(int m, int p, int arr[10][10])
{
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf(" |%d|", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n, o, p;
    printf("Enter Rows and Column in MATRIX-1 :\n");
    scanf("%d %d", &m, &n);
    printf("Enter Rows and Column in MATRIX-2 :\n");
    scanf("%d %d", &o, &p);

    if (n != o)
    {
        printf("Above entered Matrix can't be multiplied;");
        printf("\n***Note***\nFor Multiplication of two matrix :Matrix-1 columns = Matrix-2 rows");
    }
    else
    {
        printf("\n<---*Enter Values in Matrix-1*--->\n");
        getValue(m, n, arr1);
        printf("\n<---*Enter Values in Matrix-2*--->\n");
        getValue(o, p, arr2);
        printf("\nElements in matrix1:\n");
        display(m, n, arr1);
        printf("\nElements in matrix2:\n");
        display(o, p, arr2);

        printf("\nFinal Multiplication:<Matrix1 x Matrix2>\n");
        calculate(m, p, o);
        calculatedisplay(m, p, arr3);
    }
    return 0;
}