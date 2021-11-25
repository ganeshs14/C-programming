#include <stdio.h>
#include <conio.h>
typedef struct driver
{
    char name[20];
    int dlisc;
    char route[20];
    int kms;
} dr;

int main()
{
    dr a, b, c;
    printf("\n<--Driver 1-->\nEnter name:");
    scanf("%s", &a.name);
    printf("Enter D_liscence no.:");
    scanf("%d", &a.dlisc);
    printf("Enter route:");
    scanf("%s", &a.route);
    printf("Enter Distance travelled:");
    scanf("%d", &a.kms);

    printf("\n<--Driver 2-->\nEnter name:");
    scanf("%s", &b.name);
    printf("Enter D_liscence no.:");
    scanf("%d", &b.dlisc);
    printf("Enter route:");
    scanf("%s", &b.route);
    printf("Enter Distance travelled:");
    scanf("%d", &b.kms);

    printf("\n<--Driver 3-->\nEnter name:");
    scanf("%s", &c.name);
    printf("Enter D_liscence no.:");
    scanf("%d", &c.dlisc);
    printf("Enter route:");
    scanf("%s", &c.route);
    printf("Enter Distance travelled:");
    scanf("%d", &c.kms);

    printf("\n\t<----Details os the Drivers---->\n");
    printf("-Sr.no.-\t-Name-\t-D_liscense-\t-Route-\t\t-Distance-\n");
    printf(" 01.\t\t%s\t\t%d\t%s\t\t%d\n", a.name, a.dlisc, a.route, a.kms);
    printf(" 02.\t\t%s\t\t%d\t%s\t\t%d\n", b.name, b.dlisc, b.route, b.kms);
    printf(" 03.\t\t%s\t\t%d\t%s\t\t%d\n", c.name, c.dlisc, c.route, c.kms);
    getch();
    return 0;
}