#include <stdio.h>
/*
#include "temp.c" //Extern storage Class
extern int f;
*/

/*
int func()
{
    static int a; // Static storage class(Static variable).
    a++;
    return a;
}
*/

void fun(){
    auto int a;                 //Auto Storage Class.
    printf("Value of A :%d\n",a);
}

int main()
{
    /*
    int n, i;
    printf("Enter a no. :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", func());
    }
    */
    
    /*
    func1();
    printf("\n value of f:%d\n",f);//use of int a w/o declaration in main function. 
   */

    //fun();

    /*
    register int a=10;              //Registe Storage Class.
    printf("value of register variable is : %d\n",a);
    */

    return 0;
}