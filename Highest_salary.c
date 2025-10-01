// You are asked to write a program to find out which employee has the highest salary. Each employee has the following information: ID (integer), Name (string, without spaces) and Salary (floating point number). You will receive information about 5 employees. Your task is to determine which employee has the highest salary and print only his/her name.
// Input: The input contains exactly 5 lines. Each line has the following format: Name, ID and Salary.
// Output: Print a single line containing only the name of the employee who has the highest salary.

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[5];
    int i, index = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Employee %d Information:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    for (i = 1; i < 5; i++)
    {
        if (emp[i].salary > emp[index].salary)
        {
            index = i;
        }
    }

    printf("\nEmployee with Highest Salary:\n");
    printf("Name: %s\n", emp[index].name);

    return 0;
}
