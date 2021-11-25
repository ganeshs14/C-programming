#include <stdio.h>
#include <conio.h>
typedef union driver
{
    char name[20];
    int dlisc;
    char route[20];
    int kms;
} dr;
void create(dr driver[10], int n)
{
    printf("\n\t----DETAILS ENTRY----\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n<--Driver %d-->\nEnter name:", i+1);
        scanf("%s", &driver[i].name);
        printf("Enter D_liscence no.:");
        scanf("%d", &driver[i].dlisc);
        printf("Enter route:");
        scanf("%s", &driver[i].route);
        printf("Enter Distance travelled:");
        scanf("%d", &driver[i].kms);
    }
}

void dash()
{
    for (int s = 0; s < 50; s++)
        printf("-");
}

void display(dr driver[10], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nDriver %d-->\tName:%s\tD_liscense:%d\tRoute:%s\tDistance:%d\n", i+1, driver->name, driver->dlisc, driver->route, driver->kms);
    }
}
int main()
{
    int n;
    dr driver[10];
    printf("Enter no. of drivers (no. <= 10):");
    scanf("%d", &n);
    dash();
    create(driver, n);
    dash();
    display(driver, n);
    dash();
    printf("\n\tThanks !!\n");
    int* ptr1 = &driver[1].kms;
    int* ptr2 = &driver[2].dlisc;
    printf("\n%d",ptr1);
    printf("\n%d",ptr2);

    getch();
    return 0;
}