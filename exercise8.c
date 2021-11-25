#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int i = 0, len_id, n;
    printf("How many employee ?\n-->");
    scanf("%d", &n);
    while (i < n)
    {
        printf("\nEnter legth of Id for E_Id[%d]:", i + 1);
        scanf("%d", &len_id);

        ptr = (char *)malloc((len_id + 1) * sizeof(char));

        printf("Enter EmployeeId : ");
        scanf("%s", ptr);

        printf("\n");

        printf("EmployeeId of Employee_[%d] : %s\n ", i + 1, ptr);
        free(ptr);
        i = i + 1;
        printf("----------------------------------");
    }

    return 0;
}