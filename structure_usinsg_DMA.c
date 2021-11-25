#include <stdio.h>                  //Char name is making problem
#include <stdlib.h>

typedef struct Class
{
    int roll;
    char name[20];
    int mark;
} C;

struct Class *newClass(int roll, char name[], int mark)
{
    C *Class = (C *)malloc(3 * sizeof(C));
    Class->roll = roll;
    Class->name[20] = name;     //line
    Class->mark = mark;
    return Class;
};

void display(C *Class)
{
    printf("\tRollno.:%d ; Name:%s; Marks:%d\n", Class->roll, Class->name, Class->mark);  //line
}

int main()
{
    int n, i;
    C *a = newClass(1, "Ganesh\0", 90);
    C *b = newClass(2, "Tushar\0", 80);
    C *c = newClass(3, "Guru\0", 91);

    display(a);
    display(b);
    display(c);
    getchar();
    return 0;
}