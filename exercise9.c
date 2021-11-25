#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random()
{
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    printf("random no.: %d\n", random());
    return 0;
}